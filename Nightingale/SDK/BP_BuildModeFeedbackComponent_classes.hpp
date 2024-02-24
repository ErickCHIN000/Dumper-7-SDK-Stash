#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD8 (0x178 - 0xA0)
// BlueprintGeneratedClass BP_BuildModeFeedbackComponent.BP_BuildModeFeedbackComponent_C
class UBP_BuildModeFeedbackComponent_C : public UBuildModeFeedbackComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            OnBuildModeContextChanged;                         // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class EBuildModeContext                 Mode;                                              // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EBuildModeInput, enum class EBuildModeAction> PlacementActions;                                  // 0xC0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class EBuildModeInput, enum class EBuildModeAction> BuildModeActions;                                  // 0x110(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UBP_BuildModeFeedbackData_C*           CurrentContext;                                    // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_BuildModeFeedbackData_C*           PlacementContext;                                  // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_BuildModeFeedbackData_C*           BuildModeContext;                                  // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_BuildModeFeedbackComponent_C* GetDefaultObj();

	void BuildContexts(TMap<enum class EBuildModeInput, enum class EBuildModeAction>& TargetMap, class UBP_BuildModeFeedbackData_C** NewContext, class UBP_BuildModeFeedbackData_C* Context, enum class EBuildModeInput CurrentInput, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, class UBP_BuildModeFeedbackData_C* CallFunc_SpawnObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class EBuildModeAction CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UBP_BuildModeFeedbackEntry_C* CallFunc_SpawnObject_ReturnValue_1);
	void SetMode(enum class EBuildModeContext Context, bool K2Node_SwitchEnum_CmpSuccess);
	void Set_Action_Enabled(enum class EBuildModeAction Action, bool Enabled, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetActionEnabled_ReturnValue);
	void PushContextChangedEvent();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_BuildModeFeedbackComponent(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class UBP_BuildModeFeedbackData_C* CallFunc_BuildContexts_NewContext, class UBP_BuildModeFeedbackData_C* CallFunc_BuildContexts_NewContext_1);
	void OnBuildModeContextChanged__DelegateSignature(class UBP_BuildModeFeedbackData_C* Data, enum class EBuildModeContext Mode);
};

}


