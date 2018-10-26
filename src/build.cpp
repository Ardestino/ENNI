#include <iostream>
#include <string>
using namespace std;

string src = ".\\BuildSystem\\";
string builddir = "build\\";
///showIncludes
string cflags = "/nologo /Zi /W4 /WX /wd4530 /wd4100 /wd4706 /wd4244 "
                "/wd4512 /wd4800 /wd4702 /wd4819 /wd4127 /wd4355 /wd4091 /GR- /wd4267 "
                "/DNOMINMAX /D_CRT_SECURE_NO_WARNINGS /D_HAS_EXCEPTIONS=0 "
                "/FS /Ox /DNDEBUG /GL -I.";
string ldflags = "/DEBUG /libpath:"+ builddir + "/LTCG /OPT:REF /OPT:ICF";

string ninja_lib[] ={
"build",
"build_log",
"clean",
"clparser",
"debug_flags",
"depfile_parser",
"deps_log",
"disk_interface",
"edit_distance",
"eval_env",
"graph",
"graphviz",
"lexer",
"line_printer",
"manifest_parser",
"metrics",
"state",
"string_piece_util",
"util",
"version",
"subprocess-win32",
"includes_normalize-win32",
"msvc_helper-win32",
"msvc_helper_main-win32",
"minidump-win32",
"getopt"
};

void cxx(string file){
    string cmd = "cl" + cflags + " -c "+ src + file + ".cc /Fo" + builddir + file + ".obj";
    system(cmd.c_str());
}

void ar(string in,string outLib){
    string cmd = "lib /nologo /ltcg /out:"+ outLib + in;
    system(cmd.c_str());
}

void link(string in,string libs,string out){
    string cmd = "cl " + in +" "+ libs + " /nologo /link " + ldflags + " /out:" + out;
    system(cmd.c_str());
}

int main(){
    system("mkdir build");
    for(string file : ninja_lib){
        cxx(file);
    }
    string in =" ";
    for(string obj : ninja_lib){
        in += builddir + obj + ".obj "; 
    }
    ar(in,builddir+"ninja.lib");
    cxx("ninja");
    link(builddir + "ninja.obj", builddir + "ninja.lib","BuildSystem.exe");
    return EXIT_SUCCESS;
}