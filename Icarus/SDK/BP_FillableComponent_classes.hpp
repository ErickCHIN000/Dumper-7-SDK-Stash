#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xE8 - 0xE0)
// BlueprintGeneratedClass BP_FillableComponent.BP_FillableComponent_C
class UBP_FillableComponent_C : public UFillableComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_FillableComponent_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_FillableComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusItem* K2Node_DynamicCast_AsIcarus_Item, bool K2Node_DynamicCast_bSuccess, const struct FItemDynamicData& CallFunc_GetItemProperty_DynamicData, enum class EDataValid CallFunc_GetItemProperty_Paths, const struct FItemableData& CallFunc_GetItemableData_ItemableData, enum class EDataValid CallFunc_GetItemableData_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
};

}


