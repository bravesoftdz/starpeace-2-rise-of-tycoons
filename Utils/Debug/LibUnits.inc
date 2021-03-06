const
  LibUnits: array[0..287] of String = (
   'accctrl',
   'aclapi',
   'activex',
   'actnlist',
   'adoconed',
   'adoconst',
   'adodb',
   'adoint',
   'appevnts',
   'arrowcha',
   'arrowedi',
   'asptlb',
   'axctrls',
   'axisincr',
   'axmaxmin',
   'bde',
   'bdeconst',
   'bdemts',
   'brkrconst',
   'brushdlg',
   'bubblech',
   'bubbledi',
   'buttons',
   'calendar',
   'cgiapp',
   'chart',
   'checklst',
   'classes',
   'clipbrd',
   'colorgrd',
   'comconst',
   'comcorba',
   'comctrls',
   'commctrl',
   'commdlg',
   'comobj',
   'compprod',
   'comserv',
   'comstrs',
   'consts',
   'contnrs',
   'controls',
   'copyprsr',
   'corbacon',
   'corbaobj',
   'corbardm',
   'corbastd',
   'corbavcl',
   'corbcnst',
   'corbinit',
   'cpl',
   'ctlpanel',
   'databkr',
   'db',
   'dbactns',
   'dbcgrids',
   'dbchart',
   'dbclient',
   'dbcommon',
   'dbconsts',
   'dbctrls',
   'dbeditch',
   'dbexcept',
   'dbgrids',
   'dbinpreq',
   'dblogdlg',
   'dblookup',
   'dbolectl',
   'dbpwdlg',
   'dbtables',
   'dbweb',
   'ddeman',
   'ddeml',
   'dialogs',
   'diroutln',
   'dlgs',
   'drintf',
   'drtable',
   'dsgnwnds',
   'dsintf',
   'dsndbcst',
   'dsprod',
   'editchar',
   'editintf',
   'exptintf',
   'extctrls',
   'extdlgs',
   'filectrl',
   'fileintf',
   'flatsb',
   'flineedi',
   'forms',
   'ganttch',
   'ganttedi',
   'gauges',
   'graphics',
   'grids',
   'httpapp',
   'ib',
   'ibbatchmove',
   'ibblob',
   'ibconst',
   'ibctrls',
   'ibcustomdataset',
   'ibdatabase',
   'ibdatabaseinfo',
   'iberrorcodes',
   'ibevents',
   'ibevnts',
   'ibexternals',
   'ibheader',
   'ibinstall',
   'ibinstallheader',
   'ibintf',
   'ibproc32',
   'ibquery',
   'ibservices',
   'ibsql',
   'ibsqlmonitor',
   'ibstoredproc',
   'ibtable',
   'ibupdatesql',
   'ibutils',
   'imagehlp',
   'imglist',
   'imm',
   'inifiles',
   'isapi',
   'isapi2',
   'isapiapp',
   'isp3',
   'istreams',
   'jconsts',
   'jpeg',
   'libhelp',
   'lzexpand',
   'mapi',
   'mask',
   'masks',
   'math',
   'mconnect',
   'menus',
   'messages',
   'midas',
   'midascon',
   'midconst',
   'miditems',
   'midprod',
   'mmsystem',
   'mplayer',
   'mshtml',
   'mtsobj',
   'mtsrdm',
   'mtx',
   'multimon',
   'mxarrays',
   'mxbutton',
   'mxcommon',
   'mxconsts',
   'mxdb',
   'mxdcube',
   'mxdsql',
   'mxgraph',
   'mxgrid',
   'mxpbar',
   'mxpivsrc',
   'mxqedcom',
   'mxqparse',
   'mxstore',
   'mxtables',
   'nb30',
   'nmconst',
   'nmdaytim',
   'nmecho',
   'nmextstr',
   'nmfngr',
   'nmftp',
   'nmhttp',
   'nmmsg',
   'nmnntp',
   'nmpop3',
   'nms_huge',
   'nms_stream',
   'nmsmtp',
   'nmstrm',
   'nmtime',
   'nmudp',
   'nmurl',
   'nmuue',
   'ns30fix',
   'ns35fix',
   'ns36fix',
   'nsapi',
   'objbrkr',
   'ocxreg',
   'oleconst',
   'olectnrs',
   'olectrls',
   'oledb',
   'oledlg',
   'oleserver',
   'opengl',
   'orbpas',
   'outline',
   'pagitems',
   'pendlg',
   'penwin',
   'picedit',
   'printers',
   'provider',
   'proxies',
   'psapi',
   'psock',
   'qr3const',
   'qrabout',
   'qrcomped',
   'qrctrls',
   'qrdatasu',
   'qrenved',
   'qrexpbld',
   'qrexport',
   'qrexpr',
   'qrexpred',
   'qrextra',
   'qrlabled',
   'qrprev',
   'qrprgres',
   'qrprnsu',
   'qrprntr',
   'qrtee',
   'quickrpt',
   'registry',
   'regstr',
   'richedit',
   'scktcomp',
   'sconnect',
   'scrptmgr',
   'series',
   'shapeedi',
   'sharemem',
   'shdocvw',
   'shellapi',
   'shlobj',
   'smintf',
   'spin',
   'sqledit',
   'stdactns',
   'stdctrls',
   'stdvcl',
   'svcmgr',
   'syncobjs',
   'sysconst',
   'sysinit',
   'system',
   'sysutils',
   'tabnotbk',
   'tabs',
   'tecanvas',
   'teeabout',
   'teeconst',
   'teefunci',
   'teegally',
   'teelisb',
   'teengine',
   'teepoedi',
   'teeprevi',
   'teeprocs',
   'teeshape',
   'teexport',
   'tlhelp32',
   'toolintf',
   'toolwin',
   'typinfo',
   'urlmon',
   'vclcom',
   'virtintf',
   'wbmconst',
   'webbroker',
   'webcomp',
   'webconst',
   'windows',
   'wininet',
   'winsock',
   'winspool',
   'winsvc',
   'xmlbrokr',
   'zlib',
   'zlibconst' );