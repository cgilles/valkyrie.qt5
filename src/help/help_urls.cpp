/****************************************************************************
** URL strings definition
**  - placed in one file in an endeavour to minimise
**    what is probably going to be a maintenance nightmare.
** --------------------------------------------------------------------------
**
** Copyright (C) 2000-2011, OpenWorks LLP. All rights reserved.
** <info@open-works.co.uk>
**
** This file is part of Valkyrie, a front-end for Valgrind.
**
** This file may be used under the terms of the GNU General Public
** License version 2.0 as published by the Free Software Foundation
** and appearing in the file COPYING included in the packaging of
** this file.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
****************************************************************************/

#include "help_urls.h"


// not every flag/option has context-sensitive help
const char* urlNone  = "";


// ============================================================
// Valkyrie
namespace urlValkyrie
{

// Mainwindow
const char* menuBar      = ":/vk_doc/doc/mainwindow.html#menu_bar";
const char* fileMenu     = ":/vk_doc/doc/mainwindow.html#file_menu";
const char* toolMenu     = ":/vk_doc/doc/mainwindow.html#tools_menu";
const char* optionsMenu  = ":/vk_doc/doc/mainwindow.html#options_menu";
const char* runButton    = ":/vk_doc/doc/mainwindow.html#run_button";
const char* stopButton   = ":/vk_doc/doc/mainwindow.html#stop_button";
const char* helpMenu     = ":/vk_doc/doc/mainwindow.html#help_menu";
const char* statusMsg    = ":/vk_doc/doc/mainwindow.status_msg.html";
const char* flagsWidget  = ":/vk_doc/doc/mainwindow.flags_widget.html";

// options dialog
const char* optsDlg      = ":/vk_doc/doc/options_dialog.html";

// valkyrie's options page
const char* optsPage     = ":/vk_doc/doc/options_dialog.html#valkyrie";
const char* toolTips     = ":/vk_doc/doc/options_dialog.html#tool_tips";
const char* toolLabels   = ":/vk_doc/doc/options_dialog.html#tool_label";
const char* browser      = ":/vk_doc/doc/options_dialog.html#browser";
const char* logDir       = ":/vk_doc/doc/options_dialog.html#log_dir";
const char* workingDir   = ":/vk_doc/doc/options_dialog.html#working_dir";
const char* projectFile  = ":/vk_doc/doc/options_dialog.html#project_file";
const char* userFontGen  = ":/vk_doc/doc/options_dialog.html#user_font_general";
const char* userFontTool = ":/vk_doc/doc/options_dialog.html#user_font_tool";
const char* palette      = ":/vk_doc/doc/options_dialog.html#palette";
const char* srcLines     = ":/vk_doc/doc/options_dialog.html#src_lines";
const char* srcEditor    = ":/vk_doc/doc/options_dialog.html#src_editor";
const char* binary       = ":/vk_doc/doc/options_dialog.html#binary";
const char* binFlags     = ":/vk_doc/doc/options_dialog.html#bin_flags";
const char* vgDir        = ":/vk_doc/doc/options_dialog.html#valgrind";

// valgrind's options page: tab Suppressions
const char* coreTab  = ":/vk_doc/doc/options_valgrind.html#core_tab";
const char* errorTab = ":/vk_doc/doc/options_valgrind.html#error_tab";
const char* suppsTab = ":/vk_doc/doc/options_valgrind.html#supps_tab";

// MemcheckView toolbuttons
const char* openAllButton = "";
const char* openOneButton = "";
const char* srcPathButton = "";
const char* loadLogButton = "";
const char* mrgLogButton  = "";
const char* saveLogButton = "";
const char* suppEdButton  = "";
}


// ============================================================
// Valgrind core
namespace urlVgCore
{
// valgrind's options page: tab Core
const char* mainTool        = ":/vk_doc/doc/vg-manual-core.html#tool_name";
const char* verbosity       = ":/vk_doc/doc/vg-manual-core.html#verbosity";
const char* traceChild      = ":/vk_doc/doc/vg-manual-core.html#trace_children";
const char* silentChild     = ":/vk_doc/doc/vg-manual-core.html#silent_child";
const char* trackFds        = ":/vk_doc/doc/vg-manual-core.html#track_fds";
const char* timeStamp       = ":/vk_doc/doc/vg-manual-core.html#time_stamp";
const char* xmlOutput       = ":/vk_doc/doc/vg-manual-core.html#xml_output";
const char* xmlComment      = ":/vk_doc/doc/vg-manual-core.html#xml_user_comment";
const char* freeGlibc       = ":/vk_doc/doc/vg-manual-core.html#free_glibc";
const char* showEmWarns     = ":/vk_doc/doc/vg-manual-core.html#show_emwarns";
const char* smcSupport      = ":/vk_doc/doc/vg-manual-core.html#smc_support";
const char* simHints        = ":/vk_doc/doc/vg-manual-core.html#simulation_hints";
const char* kernelVariant   = ":/vk_doc/doc/vg-manual-core.html#kernel_variant";

// valgrind's options page: tab Error Reporting
const char* logToFd         = ":/vk_doc/doc/vg-manual-core.html#log2fd";
const char* logToFile       = ":/vk_doc/doc/vg-manual-core.html#log2file";
const char* logToSocket     = ":/vk_doc/doc/vg-manual-core.html#log2socket";
const char* autoDemangle    = ":/vk_doc/doc/vg-manual-core.html#auto_demangle";
const char* numCallers      = ":/vk_doc/doc/vg-manual-core.html#num_callers";
const char* errorLimit      = ":/vk_doc/doc/vg-manual-core.html#error_limit";
const char* stackTraces     = ":/vk_doc/doc/vg-manual-core.html#stack_traces";
const char* genSuppressions = ":/vk_doc/doc/vg-manual-core.html#gen_supps";
const char* startDebugger   = ":/vk_doc/doc/vg-manual-core.html#attach_debugger";
const char* whichDebugger   = ":/vk_doc/doc/vg-manual-core.html#which_debugger";
const char* inputFd         = ":/vk_doc/doc/vg-manual-core.html#input_fd";
const char* maxSFrames      = ":/vk_doc/doc/vg-manual-core.html#max_frames";

// only used by Memcheck and Massif
const char* Alignment       = ":/vk_doc/doc/vg-manual-core.html#alignment";
}


// ============================================================
// Memcheck
namespace urlMemcheck
{
const char* optsMC    = ":/vk_doc/doc/vg-manual-mc.html";
const char* Leakcheck = ":/vk_doc/doc/vg-manual-mc.html#leakcheck";
const char* Showreach = ":/vk_doc/doc/vg-manual-mc.html#showreach";
//const char* UndefVal  = ":/vk_doc/doc/vg-manual-mc.html#undefvalerrs";
const char* TrackOri  = ":/vk_doc/doc/vg-manual-mc.html#undefvalerrs";
const char* Leakres   = ":/vk_doc/doc/vg-manual-mc.html#leakres";
const char* Freelist  = ":/vk_doc/doc/vg-manual-mc.html#freelist";
const char* gcc296    = ":/vk_doc/doc/vg-manual-mc.html#gcc296";
const char* Partial   = ":/vk_doc/doc/vg-manual-mc.html#partial";
}


// ============================================================
// Cachegrind
namespace urlCachegrind
{
const char* optsCG    = ":/vk_doc/doc/vg-manual-cg.html";
const char* Cacheopts = ":/vk_doc/doc/vg-manual-cg.html#cg-manual.cgopts";
const char* Pid       = ":/vk_doc/doc/vg-manual-cg.html#pid";
const char* Sort      = ":/vk_doc/doc/vg-manual-cg.html#sort";
const char* Show      = ":/vk_doc/doc/vg-manual-cg.html#show";
const char* Threshold = ":/vk_doc/doc/vg-manual-cg.html#threshold";
const char* Auto      = ":/vk_doc/doc/vg-manual-cg.html#auto";
const char* Context   = ":/vk_doc/doc/vg-manual-cg.html#context";
const char* Include   = ":/vk_doc/doc/vg-manual-cg.html#include";
}


// ============================================================
// Massif
namespace urlMassif
{
const char* optsMS    = ":/vk_doc/doc/vg-manual-ms.html";
const char* Heap      = ":/vk_doc/doc/vg-manual-ms.html#heap";
const char* HeapAdmin = ":/vk_doc/doc/vg-manual-ms.html#heap-admin";
const char* Stacks    = ":/vk_doc/doc/vg-manual-ms.html#stacks";
const char* Depth     = ":/vk_doc/doc/vg-manual-ms.html#depth";
const char* AllocFn   = ":/vk_doc/doc/vg-manual-ms.html#alloc-fn";
const char* Format    = ":/vk_doc/doc/vg-manual-ms.html#format";
}

