#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_ItemCameraShakes.BPFL_ItemCameraShakes_C
class UBPFL_ItemCameraShakes_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_ItemCameraShakes_C* GetDefaultObj();

	void GetCameraShakeFromTag(const struct FItemDataReference& ItemReference, const struct FGameplayTag& ShakeTag, class UObject* __WorldContext, bool* Succeeded, class UClass** CameraShake, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData_Equippable& CallFunc_TryGetItemDataEquippable_OutData, enum class EGetResult CallFunc_TryGetItemDataEquippable_Branches, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FS_ItemCameraShakes& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
};

}


