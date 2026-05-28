WBK_GlobalKitBoxRn = TCW_KitBox;
[] exec "WBK_KitMenu\WBK_Kit_Camera.sqs";
player switchMove selectRandom ["Acts_AidlPercMstpSloWWrflDnon_warmup_1","Acts_AidlPercMstpSloWWrflDnon_warmup_2","Acts_AidlPercMstpSloWWrflDnon_warmup_3","Acts_AidlPercMstpSloWWrflDnon_warmup_4","Acts_AidlPercMstpSloWWrflDnon_warmup_5"];
_dirToObj = [player, _obj] call BIS_fnc_dirTo;
_actDir = _dirToObj - 180;
player setDir _actDir;