    #pragma GCC diagnostic push 
    #pragma GCC diagnostic ignored "-Wwrite-strings"
    char *jsonLabel[NUM_JSONS] = {
        "style",
        "polyChannels",

		// Python code to generate
		// g = ""
		// indent = "\t\t"
		// comma = ""
		// for channel in range(1,17):
		//     g = g + indent
		//     for step in range(1,65):
		//         for type in ["gate","cv"]:
		//             g = g + comma + '"c' + ("00" + str(channel))[-2:] + "s" + ("00" + str(step))[-2:] + type + '"'
		//             comma = ", "
		//     g = g + ',\n'
		//     comma = ""
		// print (g)
		"c01s01gate", "c01s01cv", "c01s02gate", "c01s02cv", "c01s03gate", "c01s03cv", "c01s04gate", "c01s04cv", "c01s05gate", "c01s05cv", "c01s06gate", "c01s06cv", "c01s07gate", "c01s07cv", "c01s08gate", "c01s08cv", "c01s09gate", "c01s09cv", "c01s10gate", "c01s10cv", "c01s11gate", "c01s11cv", "c01s12gate", "c01s12cv", "c01s13gate", "c01s13cv", "c01s14gate", "c01s14cv", "c01s15gate", "c01s15cv", "c01s16gate", "c01s16cv", "c01s17gate", "c01s17cv", "c01s18gate", "c01s18cv", "c01s19gate", "c01s19cv", "c01s20gate", "c01s20cv", "c01s21gate", "c01s21cv", "c01s22gate", "c01s22cv", "c01s23gate", "c01s23cv", "c01s24gate", "c01s24cv", "c01s25gate", "c01s25cv", "c01s26gate", "c01s26cv", "c01s27gate", "c01s27cv", "c01s28gate", "c01s28cv", "c01s29gate", "c01s29cv", "c01s30gate", "c01s30cv", "c01s31gate", "c01s31cv", "c01s32gate", "c01s32cv", "c01s33gate", "c01s33cv", "c01s34gate", "c01s34cv", "c01s35gate", "c01s35cv", "c01s36gate", "c01s36cv", "c01s37gate", "c01s37cv", "c01s38gate", "c01s38cv", "c01s39gate", "c01s39cv", "c01s40gate", "c01s40cv", "c01s41gate", "c01s41cv", "c01s42gate", "c01s42cv", "c01s43gate", "c01s43cv", "c01s44gate", "c01s44cv", "c01s45gate", "c01s45cv", "c01s46gate", "c01s46cv", "c01s47gate", "c01s47cv", "c01s48gate", "c01s48cv", "c01s49gate", "c01s49cv", "c01s50gate", "c01s50cv", "c01s51gate", "c01s51cv", "c01s52gate", "c01s52cv", "c01s53gate", "c01s53cv", "c01s54gate", "c01s54cv", "c01s55gate", "c01s55cv", "c01s56gate", "c01s56cv", "c01s57gate", "c01s57cv", "c01s58gate", "c01s58cv", "c01s59gate", "c01s59cv", "c01s60gate", "c01s60cv", "c01s61gate", "c01s61cv", "c01s62gate", "c01s62cv", "c01s63gate", "c01s63cv", "c01s64gate", "c01s64cv",
		"c02s01gate", "c02s01cv", "c02s02gate", "c02s02cv", "c02s03gate", "c02s03cv", "c02s04gate", "c02s04cv", "c02s05gate", "c02s05cv", "c02s06gate", "c02s06cv", "c02s07gate", "c02s07cv", "c02s08gate", "c02s08cv", "c02s09gate", "c02s09cv", "c02s10gate", "c02s10cv", "c02s11gate", "c02s11cv", "c02s12gate", "c02s12cv", "c02s13gate", "c02s13cv", "c02s14gate", "c02s14cv", "c02s15gate", "c02s15cv", "c02s16gate", "c02s16cv", "c02s17gate", "c02s17cv", "c02s18gate", "c02s18cv", "c02s19gate", "c02s19cv", "c02s20gate", "c02s20cv", "c02s21gate", "c02s21cv", "c02s22gate", "c02s22cv", "c02s23gate", "c02s23cv", "c02s24gate", "c02s24cv", "c02s25gate", "c02s25cv", "c02s26gate", "c02s26cv", "c02s27gate", "c02s27cv", "c02s28gate", "c02s28cv", "c02s29gate", "c02s29cv", "c02s30gate", "c02s30cv", "c02s31gate", "c02s31cv", "c02s32gate", "c02s32cv", "c02s33gate", "c02s33cv", "c02s34gate", "c02s34cv", "c02s35gate", "c02s35cv", "c02s36gate", "c02s36cv", "c02s37gate", "c02s37cv", "c02s38gate", "c02s38cv", "c02s39gate", "c02s39cv", "c02s40gate", "c02s40cv", "c02s41gate", "c02s41cv", "c02s42gate", "c02s42cv", "c02s43gate", "c02s43cv", "c02s44gate", "c02s44cv", "c02s45gate", "c02s45cv", "c02s46gate", "c02s46cv", "c02s47gate", "c02s47cv", "c02s48gate", "c02s48cv", "c02s49gate", "c02s49cv", "c02s50gate", "c02s50cv", "c02s51gate", "c02s51cv", "c02s52gate", "c02s52cv", "c02s53gate", "c02s53cv", "c02s54gate", "c02s54cv", "c02s55gate", "c02s55cv", "c02s56gate", "c02s56cv", "c02s57gate", "c02s57cv", "c02s58gate", "c02s58cv", "c02s59gate", "c02s59cv", "c02s60gate", "c02s60cv", "c02s61gate", "c02s61cv", "c02s62gate", "c02s62cv", "c02s63gate", "c02s63cv", "c02s64gate", "c02s64cv",
		"c03s01gate", "c03s01cv", "c03s02gate", "c03s02cv", "c03s03gate", "c03s03cv", "c03s04gate", "c03s04cv", "c03s05gate", "c03s05cv", "c03s06gate", "c03s06cv", "c03s07gate", "c03s07cv", "c03s08gate", "c03s08cv", "c03s09gate", "c03s09cv", "c03s10gate", "c03s10cv", "c03s11gate", "c03s11cv", "c03s12gate", "c03s12cv", "c03s13gate", "c03s13cv", "c03s14gate", "c03s14cv", "c03s15gate", "c03s15cv", "c03s16gate", "c03s16cv", "c03s17gate", "c03s17cv", "c03s18gate", "c03s18cv", "c03s19gate", "c03s19cv", "c03s20gate", "c03s20cv", "c03s21gate", "c03s21cv", "c03s22gate", "c03s22cv", "c03s23gate", "c03s23cv", "c03s24gate", "c03s24cv", "c03s25gate", "c03s25cv", "c03s26gate", "c03s26cv", "c03s27gate", "c03s27cv", "c03s28gate", "c03s28cv", "c03s29gate", "c03s29cv", "c03s30gate", "c03s30cv", "c03s31gate", "c03s31cv", "c03s32gate", "c03s32cv", "c03s33gate", "c03s33cv", "c03s34gate", "c03s34cv", "c03s35gate", "c03s35cv", "c03s36gate", "c03s36cv", "c03s37gate", "c03s37cv", "c03s38gate", "c03s38cv", "c03s39gate", "c03s39cv", "c03s40gate", "c03s40cv", "c03s41gate", "c03s41cv", "c03s42gate", "c03s42cv", "c03s43gate", "c03s43cv", "c03s44gate", "c03s44cv", "c03s45gate", "c03s45cv", "c03s46gate", "c03s46cv", "c03s47gate", "c03s47cv", "c03s48gate", "c03s48cv", "c03s49gate", "c03s49cv", "c03s50gate", "c03s50cv", "c03s51gate", "c03s51cv", "c03s52gate", "c03s52cv", "c03s53gate", "c03s53cv", "c03s54gate", "c03s54cv", "c03s55gate", "c03s55cv", "c03s56gate", "c03s56cv", "c03s57gate", "c03s57cv", "c03s58gate", "c03s58cv", "c03s59gate", "c03s59cv", "c03s60gate", "c03s60cv", "c03s61gate", "c03s61cv", "c03s62gate", "c03s62cv", "c03s63gate", "c03s63cv", "c03s64gate", "c03s64cv",
		"c04s01gate", "c04s01cv", "c04s02gate", "c04s02cv", "c04s03gate", "c04s03cv", "c04s04gate", "c04s04cv", "c04s05gate", "c04s05cv", "c04s06gate", "c04s06cv", "c04s07gate", "c04s07cv", "c04s08gate", "c04s08cv", "c04s09gate", "c04s09cv", "c04s10gate", "c04s10cv", "c04s11gate", "c04s11cv", "c04s12gate", "c04s12cv", "c04s13gate", "c04s13cv", "c04s14gate", "c04s14cv", "c04s15gate", "c04s15cv", "c04s16gate", "c04s16cv", "c04s17gate", "c04s17cv", "c04s18gate", "c04s18cv", "c04s19gate", "c04s19cv", "c04s20gate", "c04s20cv", "c04s21gate", "c04s21cv", "c04s22gate", "c04s22cv", "c04s23gate", "c04s23cv", "c04s24gate", "c04s24cv", "c04s25gate", "c04s25cv", "c04s26gate", "c04s26cv", "c04s27gate", "c04s27cv", "c04s28gate", "c04s28cv", "c04s29gate", "c04s29cv", "c04s30gate", "c04s30cv", "c04s31gate", "c04s31cv", "c04s32gate", "c04s32cv", "c04s33gate", "c04s33cv", "c04s34gate", "c04s34cv", "c04s35gate", "c04s35cv", "c04s36gate", "c04s36cv", "c04s37gate", "c04s37cv", "c04s38gate", "c04s38cv", "c04s39gate", "c04s39cv", "c04s40gate", "c04s40cv", "c04s41gate", "c04s41cv", "c04s42gate", "c04s42cv", "c04s43gate", "c04s43cv", "c04s44gate", "c04s44cv", "c04s45gate", "c04s45cv", "c04s46gate", "c04s46cv", "c04s47gate", "c04s47cv", "c04s48gate", "c04s48cv", "c04s49gate", "c04s49cv", "c04s50gate", "c04s50cv", "c04s51gate", "c04s51cv", "c04s52gate", "c04s52cv", "c04s53gate", "c04s53cv", "c04s54gate", "c04s54cv", "c04s55gate", "c04s55cv", "c04s56gate", "c04s56cv", "c04s57gate", "c04s57cv", "c04s58gate", "c04s58cv", "c04s59gate", "c04s59cv", "c04s60gate", "c04s60cv", "c04s61gate", "c04s61cv", "c04s62gate", "c04s62cv", "c04s63gate", "c04s63cv", "c04s64gate", "c04s64cv",
		"c05s01gate", "c05s01cv", "c05s02gate", "c05s02cv", "c05s03gate", "c05s03cv", "c05s04gate", "c05s04cv", "c05s05gate", "c05s05cv", "c05s06gate", "c05s06cv", "c05s07gate", "c05s07cv", "c05s08gate", "c05s08cv", "c05s09gate", "c05s09cv", "c05s10gate", "c05s10cv", "c05s11gate", "c05s11cv", "c05s12gate", "c05s12cv", "c05s13gate", "c05s13cv", "c05s14gate", "c05s14cv", "c05s15gate", "c05s15cv", "c05s16gate", "c05s16cv", "c05s17gate", "c05s17cv", "c05s18gate", "c05s18cv", "c05s19gate", "c05s19cv", "c05s20gate", "c05s20cv", "c05s21gate", "c05s21cv", "c05s22gate", "c05s22cv", "c05s23gate", "c05s23cv", "c05s24gate", "c05s24cv", "c05s25gate", "c05s25cv", "c05s26gate", "c05s26cv", "c05s27gate", "c05s27cv", "c05s28gate", "c05s28cv", "c05s29gate", "c05s29cv", "c05s30gate", "c05s30cv", "c05s31gate", "c05s31cv", "c05s32gate", "c05s32cv", "c05s33gate", "c05s33cv", "c05s34gate", "c05s34cv", "c05s35gate", "c05s35cv", "c05s36gate", "c05s36cv", "c05s37gate", "c05s37cv", "c05s38gate", "c05s38cv", "c05s39gate", "c05s39cv", "c05s40gate", "c05s40cv", "c05s41gate", "c05s41cv", "c05s42gate", "c05s42cv", "c05s43gate", "c05s43cv", "c05s44gate", "c05s44cv", "c05s45gate", "c05s45cv", "c05s46gate", "c05s46cv", "c05s47gate", "c05s47cv", "c05s48gate", "c05s48cv", "c05s49gate", "c05s49cv", "c05s50gate", "c05s50cv", "c05s51gate", "c05s51cv", "c05s52gate", "c05s52cv", "c05s53gate", "c05s53cv", "c05s54gate", "c05s54cv", "c05s55gate", "c05s55cv", "c05s56gate", "c05s56cv", "c05s57gate", "c05s57cv", "c05s58gate", "c05s58cv", "c05s59gate", "c05s59cv", "c05s60gate", "c05s60cv", "c05s61gate", "c05s61cv", "c05s62gate", "c05s62cv", "c05s63gate", "c05s63cv", "c05s64gate", "c05s64cv",
		"c06s01gate", "c06s01cv", "c06s02gate", "c06s02cv", "c06s03gate", "c06s03cv", "c06s04gate", "c06s04cv", "c06s05gate", "c06s05cv", "c06s06gate", "c06s06cv", "c06s07gate", "c06s07cv", "c06s08gate", "c06s08cv", "c06s09gate", "c06s09cv", "c06s10gate", "c06s10cv", "c06s11gate", "c06s11cv", "c06s12gate", "c06s12cv", "c06s13gate", "c06s13cv", "c06s14gate", "c06s14cv", "c06s15gate", "c06s15cv", "c06s16gate", "c06s16cv", "c06s17gate", "c06s17cv", "c06s18gate", "c06s18cv", "c06s19gate", "c06s19cv", "c06s20gate", "c06s20cv", "c06s21gate", "c06s21cv", "c06s22gate", "c06s22cv", "c06s23gate", "c06s23cv", "c06s24gate", "c06s24cv", "c06s25gate", "c06s25cv", "c06s26gate", "c06s26cv", "c06s27gate", "c06s27cv", "c06s28gate", "c06s28cv", "c06s29gate", "c06s29cv", "c06s30gate", "c06s30cv", "c06s31gate", "c06s31cv", "c06s32gate", "c06s32cv", "c06s33gate", "c06s33cv", "c06s34gate", "c06s34cv", "c06s35gate", "c06s35cv", "c06s36gate", "c06s36cv", "c06s37gate", "c06s37cv", "c06s38gate", "c06s38cv", "c06s39gate", "c06s39cv", "c06s40gate", "c06s40cv", "c06s41gate", "c06s41cv", "c06s42gate", "c06s42cv", "c06s43gate", "c06s43cv", "c06s44gate", "c06s44cv", "c06s45gate", "c06s45cv", "c06s46gate", "c06s46cv", "c06s47gate", "c06s47cv", "c06s48gate", "c06s48cv", "c06s49gate", "c06s49cv", "c06s50gate", "c06s50cv", "c06s51gate", "c06s51cv", "c06s52gate", "c06s52cv", "c06s53gate", "c06s53cv", "c06s54gate", "c06s54cv", "c06s55gate", "c06s55cv", "c06s56gate", "c06s56cv", "c06s57gate", "c06s57cv", "c06s58gate", "c06s58cv", "c06s59gate", "c06s59cv", "c06s60gate", "c06s60cv", "c06s61gate", "c06s61cv", "c06s62gate", "c06s62cv", "c06s63gate", "c06s63cv", "c06s64gate", "c06s64cv",
		"c07s01gate", "c07s01cv", "c07s02gate", "c07s02cv", "c07s03gate", "c07s03cv", "c07s04gate", "c07s04cv", "c07s05gate", "c07s05cv", "c07s06gate", "c07s06cv", "c07s07gate", "c07s07cv", "c07s08gate", "c07s08cv", "c07s09gate", "c07s09cv", "c07s10gate", "c07s10cv", "c07s11gate", "c07s11cv", "c07s12gate", "c07s12cv", "c07s13gate", "c07s13cv", "c07s14gate", "c07s14cv", "c07s15gate", "c07s15cv", "c07s16gate", "c07s16cv", "c07s17gate", "c07s17cv", "c07s18gate", "c07s18cv", "c07s19gate", "c07s19cv", "c07s20gate", "c07s20cv", "c07s21gate", "c07s21cv", "c07s22gate", "c07s22cv", "c07s23gate", "c07s23cv", "c07s24gate", "c07s24cv", "c07s25gate", "c07s25cv", "c07s26gate", "c07s26cv", "c07s27gate", "c07s27cv", "c07s28gate", "c07s28cv", "c07s29gate", "c07s29cv", "c07s30gate", "c07s30cv", "c07s31gate", "c07s31cv", "c07s32gate", "c07s32cv", "c07s33gate", "c07s33cv", "c07s34gate", "c07s34cv", "c07s35gate", "c07s35cv", "c07s36gate", "c07s36cv", "c07s37gate", "c07s37cv", "c07s38gate", "c07s38cv", "c07s39gate", "c07s39cv", "c07s40gate", "c07s40cv", "c07s41gate", "c07s41cv", "c07s42gate", "c07s42cv", "c07s43gate", "c07s43cv", "c07s44gate", "c07s44cv", "c07s45gate", "c07s45cv", "c07s46gate", "c07s46cv", "c07s47gate", "c07s47cv", "c07s48gate", "c07s48cv", "c07s49gate", "c07s49cv", "c07s50gate", "c07s50cv", "c07s51gate", "c07s51cv", "c07s52gate", "c07s52cv", "c07s53gate", "c07s53cv", "c07s54gate", "c07s54cv", "c07s55gate", "c07s55cv", "c07s56gate", "c07s56cv", "c07s57gate", "c07s57cv", "c07s58gate", "c07s58cv", "c07s59gate", "c07s59cv", "c07s60gate", "c07s60cv", "c07s61gate", "c07s61cv", "c07s62gate", "c07s62cv", "c07s63gate", "c07s63cv", "c07s64gate", "c07s64cv",
		"c08s01gate", "c08s01cv", "c08s02gate", "c08s02cv", "c08s03gate", "c08s03cv", "c08s04gate", "c08s04cv", "c08s05gate", "c08s05cv", "c08s06gate", "c08s06cv", "c08s07gate", "c08s07cv", "c08s08gate", "c08s08cv", "c08s09gate", "c08s09cv", "c08s10gate", "c08s10cv", "c08s11gate", "c08s11cv", "c08s12gate", "c08s12cv", "c08s13gate", "c08s13cv", "c08s14gate", "c08s14cv", "c08s15gate", "c08s15cv", "c08s16gate", "c08s16cv", "c08s17gate", "c08s17cv", "c08s18gate", "c08s18cv", "c08s19gate", "c08s19cv", "c08s20gate", "c08s20cv", "c08s21gate", "c08s21cv", "c08s22gate", "c08s22cv", "c08s23gate", "c08s23cv", "c08s24gate", "c08s24cv", "c08s25gate", "c08s25cv", "c08s26gate", "c08s26cv", "c08s27gate", "c08s27cv", "c08s28gate", "c08s28cv", "c08s29gate", "c08s29cv", "c08s30gate", "c08s30cv", "c08s31gate", "c08s31cv", "c08s32gate", "c08s32cv", "c08s33gate", "c08s33cv", "c08s34gate", "c08s34cv", "c08s35gate", "c08s35cv", "c08s36gate", "c08s36cv", "c08s37gate", "c08s37cv", "c08s38gate", "c08s38cv", "c08s39gate", "c08s39cv", "c08s40gate", "c08s40cv", "c08s41gate", "c08s41cv", "c08s42gate", "c08s42cv", "c08s43gate", "c08s43cv", "c08s44gate", "c08s44cv", "c08s45gate", "c08s45cv", "c08s46gate", "c08s46cv", "c08s47gate", "c08s47cv", "c08s48gate", "c08s48cv", "c08s49gate", "c08s49cv", "c08s50gate", "c08s50cv", "c08s51gate", "c08s51cv", "c08s52gate", "c08s52cv", "c08s53gate", "c08s53cv", "c08s54gate", "c08s54cv", "c08s55gate", "c08s55cv", "c08s56gate", "c08s56cv", "c08s57gate", "c08s57cv", "c08s58gate", "c08s58cv", "c08s59gate", "c08s59cv", "c08s60gate", "c08s60cv", "c08s61gate", "c08s61cv", "c08s62gate", "c08s62cv", "c08s63gate", "c08s63cv", "c08s64gate", "c08s64cv",
		"c09s01gate", "c09s01cv", "c09s02gate", "c09s02cv", "c09s03gate", "c09s03cv", "c09s04gate", "c09s04cv", "c09s05gate", "c09s05cv", "c09s06gate", "c09s06cv", "c09s07gate", "c09s07cv", "c09s08gate", "c09s08cv", "c09s09gate", "c09s09cv", "c09s10gate", "c09s10cv", "c09s11gate", "c09s11cv", "c09s12gate", "c09s12cv", "c09s13gate", "c09s13cv", "c09s14gate", "c09s14cv", "c09s15gate", "c09s15cv", "c09s16gate", "c09s16cv", "c09s17gate", "c09s17cv", "c09s18gate", "c09s18cv", "c09s19gate", "c09s19cv", "c09s20gate", "c09s20cv", "c09s21gate", "c09s21cv", "c09s22gate", "c09s22cv", "c09s23gate", "c09s23cv", "c09s24gate", "c09s24cv", "c09s25gate", "c09s25cv", "c09s26gate", "c09s26cv", "c09s27gate", "c09s27cv", "c09s28gate", "c09s28cv", "c09s29gate", "c09s29cv", "c09s30gate", "c09s30cv", "c09s31gate", "c09s31cv", "c09s32gate", "c09s32cv", "c09s33gate", "c09s33cv", "c09s34gate", "c09s34cv", "c09s35gate", "c09s35cv", "c09s36gate", "c09s36cv", "c09s37gate", "c09s37cv", "c09s38gate", "c09s38cv", "c09s39gate", "c09s39cv", "c09s40gate", "c09s40cv", "c09s41gate", "c09s41cv", "c09s42gate", "c09s42cv", "c09s43gate", "c09s43cv", "c09s44gate", "c09s44cv", "c09s45gate", "c09s45cv", "c09s46gate", "c09s46cv", "c09s47gate", "c09s47cv", "c09s48gate", "c09s48cv", "c09s49gate", "c09s49cv", "c09s50gate", "c09s50cv", "c09s51gate", "c09s51cv", "c09s52gate", "c09s52cv", "c09s53gate", "c09s53cv", "c09s54gate", "c09s54cv", "c09s55gate", "c09s55cv", "c09s56gate", "c09s56cv", "c09s57gate", "c09s57cv", "c09s58gate", "c09s58cv", "c09s59gate", "c09s59cv", "c09s60gate", "c09s60cv", "c09s61gate", "c09s61cv", "c09s62gate", "c09s62cv", "c09s63gate", "c09s63cv", "c09s64gate", "c09s64cv",
		"c10s01gate", "c10s01cv", "c10s02gate", "c10s02cv", "c10s03gate", "c10s03cv", "c10s04gate", "c10s04cv", "c10s05gate", "c10s05cv", "c10s06gate", "c10s06cv", "c10s07gate", "c10s07cv", "c10s08gate", "c10s08cv", "c10s09gate", "c10s09cv", "c10s10gate", "c10s10cv", "c10s11gate", "c10s11cv", "c10s12gate", "c10s12cv", "c10s13gate", "c10s13cv", "c10s14gate", "c10s14cv", "c10s15gate", "c10s15cv", "c10s16gate", "c10s16cv", "c10s17gate", "c10s17cv", "c10s18gate", "c10s18cv", "c10s19gate", "c10s19cv", "c10s20gate", "c10s20cv", "c10s21gate", "c10s21cv", "c10s22gate", "c10s22cv", "c10s23gate", "c10s23cv", "c10s24gate", "c10s24cv", "c10s25gate", "c10s25cv", "c10s26gate", "c10s26cv", "c10s27gate", "c10s27cv", "c10s28gate", "c10s28cv", "c10s29gate", "c10s29cv", "c10s30gate", "c10s30cv", "c10s31gate", "c10s31cv", "c10s32gate", "c10s32cv", "c10s33gate", "c10s33cv", "c10s34gate", "c10s34cv", "c10s35gate", "c10s35cv", "c10s36gate", "c10s36cv", "c10s37gate", "c10s37cv", "c10s38gate", "c10s38cv", "c10s39gate", "c10s39cv", "c10s40gate", "c10s40cv", "c10s41gate", "c10s41cv", "c10s42gate", "c10s42cv", "c10s43gate", "c10s43cv", "c10s44gate", "c10s44cv", "c10s45gate", "c10s45cv", "c10s46gate", "c10s46cv", "c10s47gate", "c10s47cv", "c10s48gate", "c10s48cv", "c10s49gate", "c10s49cv", "c10s50gate", "c10s50cv", "c10s51gate", "c10s51cv", "c10s52gate", "c10s52cv", "c10s53gate", "c10s53cv", "c10s54gate", "c10s54cv", "c10s55gate", "c10s55cv", "c10s56gate", "c10s56cv", "c10s57gate", "c10s57cv", "c10s58gate", "c10s58cv", "c10s59gate", "c10s59cv", "c10s60gate", "c10s60cv", "c10s61gate", "c10s61cv", "c10s62gate", "c10s62cv", "c10s63gate", "c10s63cv", "c10s64gate", "c10s64cv",
		"c11s01gate", "c11s01cv", "c11s02gate", "c11s02cv", "c11s03gate", "c11s03cv", "c11s04gate", "c11s04cv", "c11s05gate", "c11s05cv", "c11s06gate", "c11s06cv", "c11s07gate", "c11s07cv", "c11s08gate", "c11s08cv", "c11s09gate", "c11s09cv", "c11s10gate", "c11s10cv", "c11s11gate", "c11s11cv", "c11s12gate", "c11s12cv", "c11s13gate", "c11s13cv", "c11s14gate", "c11s14cv", "c11s15gate", "c11s15cv", "c11s16gate", "c11s16cv", "c11s17gate", "c11s17cv", "c11s18gate", "c11s18cv", "c11s19gate", "c11s19cv", "c11s20gate", "c11s20cv", "c11s21gate", "c11s21cv", "c11s22gate", "c11s22cv", "c11s23gate", "c11s23cv", "c11s24gate", "c11s24cv", "c11s25gate", "c11s25cv", "c11s26gate", "c11s26cv", "c11s27gate", "c11s27cv", "c11s28gate", "c11s28cv", "c11s29gate", "c11s29cv", "c11s30gate", "c11s30cv", "c11s31gate", "c11s31cv", "c11s32gate", "c11s32cv", "c11s33gate", "c11s33cv", "c11s34gate", "c11s34cv", "c11s35gate", "c11s35cv", "c11s36gate", "c11s36cv", "c11s37gate", "c11s37cv", "c11s38gate", "c11s38cv", "c11s39gate", "c11s39cv", "c11s40gate", "c11s40cv", "c11s41gate", "c11s41cv", "c11s42gate", "c11s42cv", "c11s43gate", "c11s43cv", "c11s44gate", "c11s44cv", "c11s45gate", "c11s45cv", "c11s46gate", "c11s46cv", "c11s47gate", "c11s47cv", "c11s48gate", "c11s48cv", "c11s49gate", "c11s49cv", "c11s50gate", "c11s50cv", "c11s51gate", "c11s51cv", "c11s52gate", "c11s52cv", "c11s53gate", "c11s53cv", "c11s54gate", "c11s54cv", "c11s55gate", "c11s55cv", "c11s56gate", "c11s56cv", "c11s57gate", "c11s57cv", "c11s58gate", "c11s58cv", "c11s59gate", "c11s59cv", "c11s60gate", "c11s60cv", "c11s61gate", "c11s61cv", "c11s62gate", "c11s62cv", "c11s63gate", "c11s63cv", "c11s64gate", "c11s64cv",
		"c12s01gate", "c12s01cv", "c12s02gate", "c12s02cv", "c12s03gate", "c12s03cv", "c12s04gate", "c12s04cv", "c12s05gate", "c12s05cv", "c12s06gate", "c12s06cv", "c12s07gate", "c12s07cv", "c12s08gate", "c12s08cv", "c12s09gate", "c12s09cv", "c12s10gate", "c12s10cv", "c12s11gate", "c12s11cv", "c12s12gate", "c12s12cv", "c12s13gate", "c12s13cv", "c12s14gate", "c12s14cv", "c12s15gate", "c12s15cv", "c12s16gate", "c12s16cv", "c12s17gate", "c12s17cv", "c12s18gate", "c12s18cv", "c12s19gate", "c12s19cv", "c12s20gate", "c12s20cv", "c12s21gate", "c12s21cv", "c12s22gate", "c12s22cv", "c12s23gate", "c12s23cv", "c12s24gate", "c12s24cv", "c12s25gate", "c12s25cv", "c12s26gate", "c12s26cv", "c12s27gate", "c12s27cv", "c12s28gate", "c12s28cv", "c12s29gate", "c12s29cv", "c12s30gate", "c12s30cv", "c12s31gate", "c12s31cv", "c12s32gate", "c12s32cv", "c12s33gate", "c12s33cv", "c12s34gate", "c12s34cv", "c12s35gate", "c12s35cv", "c12s36gate", "c12s36cv", "c12s37gate", "c12s37cv", "c12s38gate", "c12s38cv", "c12s39gate", "c12s39cv", "c12s40gate", "c12s40cv", "c12s41gate", "c12s41cv", "c12s42gate", "c12s42cv", "c12s43gate", "c12s43cv", "c12s44gate", "c12s44cv", "c12s45gate", "c12s45cv", "c12s46gate", "c12s46cv", "c12s47gate", "c12s47cv", "c12s48gate", "c12s48cv", "c12s49gate", "c12s49cv", "c12s50gate", "c12s50cv", "c12s51gate", "c12s51cv", "c12s52gate", "c12s52cv", "c12s53gate", "c12s53cv", "c12s54gate", "c12s54cv", "c12s55gate", "c12s55cv", "c12s56gate", "c12s56cv", "c12s57gate", "c12s57cv", "c12s58gate", "c12s58cv", "c12s59gate", "c12s59cv", "c12s60gate", "c12s60cv", "c12s61gate", "c12s61cv", "c12s62gate", "c12s62cv", "c12s63gate", "c12s63cv", "c12s64gate", "c12s64cv",
		"c13s01gate", "c13s01cv", "c13s02gate", "c13s02cv", "c13s03gate", "c13s03cv", "c13s04gate", "c13s04cv", "c13s05gate", "c13s05cv", "c13s06gate", "c13s06cv", "c13s07gate", "c13s07cv", "c13s08gate", "c13s08cv", "c13s09gate", "c13s09cv", "c13s10gate", "c13s10cv", "c13s11gate", "c13s11cv", "c13s12gate", "c13s12cv", "c13s13gate", "c13s13cv", "c13s14gate", "c13s14cv", "c13s15gate", "c13s15cv", "c13s16gate", "c13s16cv", "c13s17gate", "c13s17cv", "c13s18gate", "c13s18cv", "c13s19gate", "c13s19cv", "c13s20gate", "c13s20cv", "c13s21gate", "c13s21cv", "c13s22gate", "c13s22cv", "c13s23gate", "c13s23cv", "c13s24gate", "c13s24cv", "c13s25gate", "c13s25cv", "c13s26gate", "c13s26cv", "c13s27gate", "c13s27cv", "c13s28gate", "c13s28cv", "c13s29gate", "c13s29cv", "c13s30gate", "c13s30cv", "c13s31gate", "c13s31cv", "c13s32gate", "c13s32cv", "c13s33gate", "c13s33cv", "c13s34gate", "c13s34cv", "c13s35gate", "c13s35cv", "c13s36gate", "c13s36cv", "c13s37gate", "c13s37cv", "c13s38gate", "c13s38cv", "c13s39gate", "c13s39cv", "c13s40gate", "c13s40cv", "c13s41gate", "c13s41cv", "c13s42gate", "c13s42cv", "c13s43gate", "c13s43cv", "c13s44gate", "c13s44cv", "c13s45gate", "c13s45cv", "c13s46gate", "c13s46cv", "c13s47gate", "c13s47cv", "c13s48gate", "c13s48cv", "c13s49gate", "c13s49cv", "c13s50gate", "c13s50cv", "c13s51gate", "c13s51cv", "c13s52gate", "c13s52cv", "c13s53gate", "c13s53cv", "c13s54gate", "c13s54cv", "c13s55gate", "c13s55cv", "c13s56gate", "c13s56cv", "c13s57gate", "c13s57cv", "c13s58gate", "c13s58cv", "c13s59gate", "c13s59cv", "c13s60gate", "c13s60cv", "c13s61gate", "c13s61cv", "c13s62gate", "c13s62cv", "c13s63gate", "c13s63cv", "c13s64gate", "c13s64cv",
		"c14s01gate", "c14s01cv", "c14s02gate", "c14s02cv", "c14s03gate", "c14s03cv", "c14s04gate", "c14s04cv", "c14s05gate", "c14s05cv", "c14s06gate", "c14s06cv", "c14s07gate", "c14s07cv", "c14s08gate", "c14s08cv", "c14s09gate", "c14s09cv", "c14s10gate", "c14s10cv", "c14s11gate", "c14s11cv", "c14s12gate", "c14s12cv", "c14s13gate", "c14s13cv", "c14s14gate", "c14s14cv", "c14s15gate", "c14s15cv", "c14s16gate", "c14s16cv", "c14s17gate", "c14s17cv", "c14s18gate", "c14s18cv", "c14s19gate", "c14s19cv", "c14s20gate", "c14s20cv", "c14s21gate", "c14s21cv", "c14s22gate", "c14s22cv", "c14s23gate", "c14s23cv", "c14s24gate", "c14s24cv", "c14s25gate", "c14s25cv", "c14s26gate", "c14s26cv", "c14s27gate", "c14s27cv", "c14s28gate", "c14s28cv", "c14s29gate", "c14s29cv", "c14s30gate", "c14s30cv", "c14s31gate", "c14s31cv", "c14s32gate", "c14s32cv", "c14s33gate", "c14s33cv", "c14s34gate", "c14s34cv", "c14s35gate", "c14s35cv", "c14s36gate", "c14s36cv", "c14s37gate", "c14s37cv", "c14s38gate", "c14s38cv", "c14s39gate", "c14s39cv", "c14s40gate", "c14s40cv", "c14s41gate", "c14s41cv", "c14s42gate", "c14s42cv", "c14s43gate", "c14s43cv", "c14s44gate", "c14s44cv", "c14s45gate", "c14s45cv", "c14s46gate", "c14s46cv", "c14s47gate", "c14s47cv", "c14s48gate", "c14s48cv", "c14s49gate", "c14s49cv", "c14s50gate", "c14s50cv", "c14s51gate", "c14s51cv", "c14s52gate", "c14s52cv", "c14s53gate", "c14s53cv", "c14s54gate", "c14s54cv", "c14s55gate", "c14s55cv", "c14s56gate", "c14s56cv", "c14s57gate", "c14s57cv", "c14s58gate", "c14s58cv", "c14s59gate", "c14s59cv", "c14s60gate", "c14s60cv", "c14s61gate", "c14s61cv", "c14s62gate", "c14s62cv", "c14s63gate", "c14s63cv", "c14s64gate", "c14s64cv",
		"c15s01gate", "c15s01cv", "c15s02gate", "c15s02cv", "c15s03gate", "c15s03cv", "c15s04gate", "c15s04cv", "c15s05gate", "c15s05cv", "c15s06gate", "c15s06cv", "c15s07gate", "c15s07cv", "c15s08gate", "c15s08cv", "c15s09gate", "c15s09cv", "c15s10gate", "c15s10cv", "c15s11gate", "c15s11cv", "c15s12gate", "c15s12cv", "c15s13gate", "c15s13cv", "c15s14gate", "c15s14cv", "c15s15gate", "c15s15cv", "c15s16gate", "c15s16cv", "c15s17gate", "c15s17cv", "c15s18gate", "c15s18cv", "c15s19gate", "c15s19cv", "c15s20gate", "c15s20cv", "c15s21gate", "c15s21cv", "c15s22gate", "c15s22cv", "c15s23gate", "c15s23cv", "c15s24gate", "c15s24cv", "c15s25gate", "c15s25cv", "c15s26gate", "c15s26cv", "c15s27gate", "c15s27cv", "c15s28gate", "c15s28cv", "c15s29gate", "c15s29cv", "c15s30gate", "c15s30cv", "c15s31gate", "c15s31cv", "c15s32gate", "c15s32cv", "c15s33gate", "c15s33cv", "c15s34gate", "c15s34cv", "c15s35gate", "c15s35cv", "c15s36gate", "c15s36cv", "c15s37gate", "c15s37cv", "c15s38gate", "c15s38cv", "c15s39gate", "c15s39cv", "c15s40gate", "c15s40cv", "c15s41gate", "c15s41cv", "c15s42gate", "c15s42cv", "c15s43gate", "c15s43cv", "c15s44gate", "c15s44cv", "c15s45gate", "c15s45cv", "c15s46gate", "c15s46cv", "c15s47gate", "c15s47cv", "c15s48gate", "c15s48cv", "c15s49gate", "c15s49cv", "c15s50gate", "c15s50cv", "c15s51gate", "c15s51cv", "c15s52gate", "c15s52cv", "c15s53gate", "c15s53cv", "c15s54gate", "c15s54cv", "c15s55gate", "c15s55cv", "c15s56gate", "c15s56cv", "c15s57gate", "c15s57cv", "c15s58gate", "c15s58cv", "c15s59gate", "c15s59cv", "c15s60gate", "c15s60cv", "c15s61gate", "c15s61cv", "c15s62gate", "c15s62cv", "c15s63gate", "c15s63cv", "c15s64gate", "c15s64cv",
		"c16s01gate", "c16s01cv", "c16s02gate", "c16s02cv", "c16s03gate", "c16s03cv", "c16s04gate", "c16s04cv", "c16s05gate", "c16s05cv", "c16s06gate", "c16s06cv", "c16s07gate", "c16s07cv", "c16s08gate", "c16s08cv", "c16s09gate", "c16s09cv", "c16s10gate", "c16s10cv", "c16s11gate", "c16s11cv", "c16s12gate", "c16s12cv", "c16s13gate", "c16s13cv", "c16s14gate", "c16s14cv", "c16s15gate", "c16s15cv", "c16s16gate", "c16s16cv", "c16s17gate", "c16s17cv", "c16s18gate", "c16s18cv", "c16s19gate", "c16s19cv", "c16s20gate", "c16s20cv", "c16s21gate", "c16s21cv", "c16s22gate", "c16s22cv", "c16s23gate", "c16s23cv", "c16s24gate", "c16s24cv", "c16s25gate", "c16s25cv", "c16s26gate", "c16s26cv", "c16s27gate", "c16s27cv", "c16s28gate", "c16s28cv", "c16s29gate", "c16s29cv", "c16s30gate", "c16s30cv", "c16s31gate", "c16s31cv", "c16s32gate", "c16s32cv", "c16s33gate", "c16s33cv", "c16s34gate", "c16s34cv", "c16s35gate", "c16s35cv", "c16s36gate", "c16s36cv", "c16s37gate", "c16s37cv", "c16s38gate", "c16s38cv", "c16s39gate", "c16s39cv", "c16s40gate", "c16s40cv", "c16s41gate", "c16s41cv", "c16s42gate", "c16s42cv", "c16s43gate", "c16s43cv", "c16s44gate", "c16s44cv", "c16s45gate", "c16s45cv", "c16s46gate", "c16s46cv", "c16s47gate", "c16s47cv", "c16s48gate", "c16s48cv", "c16s49gate", "c16s49cv", "c16s50gate", "c16s50cv", "c16s51gate", "c16s51cv", "c16s52gate", "c16s52cv", "c16s53gate", "c16s53cv", "c16s54gate", "c16s54cv", "c16s55gate", "c16s55cv", "c16s56gate", "c16s56cv", "c16s57gate", "c16s57cv", "c16s58gate", "c16s58cv", "c16s59gate", "c16s59cv", "c16s60gate", "c16s60cv", "c16s61gate", "c16s61cv", "c16s62gate", "c16s62cv", "c16s63gate", "c16s63cv", "c16s64gate", "c16s64cv",

        "h01", "h02", "h03", "h04", "h05","h06", "h07", "h08", "h09", "h10", "h11", "h12", "h13", "h14", "h15", "h16"
    };
	#pragma GCC diagnostic pop
