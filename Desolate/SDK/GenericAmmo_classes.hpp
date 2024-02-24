#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x410 - 0x408)
// BlueprintGeneratedClass GenericAmmo.GenericAmmo_C
class AGenericAmmo_C : public ASHWeapon_Ammo
{
public:
	class UClass*                                AmmoBoxClass;                                      // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGenericAmmo_C* GetDefaultObj();

	void GetSelectionInfo(class AActor* TargetActor, struct FS_Selection* Result, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess, const struct FS_Selection& K2Node_MakeStruct_S_Selection, int32 CallFunc_GetDisassembleMoney_ReturnValue, class UObject* CallFunc_GetDefaultObject_ReturnValue, class AGenericItem_C* K2Node_DynamicCast_AsGeneric_Item, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class ISelectionInfo_C> CallFunc_GetSelectionInfo_self_CastInput, const struct FS_Selection& CallFunc_GetSelectionInfo_result, const struct FS_Selection& K2Node_MakeStruct_S_Selection_1);
};

}


