#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x528 - 0x528)
// BlueprintGeneratedClass GenericChestArmor.GenericChestArmor_C
class AGenericChestArmor_C : public ASHChestArmor
{
public:

	static class UClass* StaticClass();
	static class AGenericChestArmor_C* GetDefaultObj();

	void GetSelectionInfo(class AActor* TargetActor, struct FS_Selection* Result, const struct FS_Selection& K2Node_MakeStruct_S_Selection, class UObject* CallFunc_GetDefaultObject_ReturnValue, class AGenericItem_C* K2Node_DynamicCast_AsGeneric_Item, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class ISelectionInfo_C> CallFunc_GetSelectionInfo_self_CastInput, const struct FS_Selection& CallFunc_GetSelectionInfo_result, const struct FS_Selection& K2Node_MakeStruct_S_Selection_1);
};

}

