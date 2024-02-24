#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x69 (0x2C9 - 0x260)
// WidgetBlueprintGeneratedClass UMG_AccoladeMissionProgress.UMG_AccoladeMissionProgress_C
class UUMG_AccoladeMissionProgress_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Achieved;                                          // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                AccoladeImage;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          AchievedBar;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BadgeGlow;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CountText;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            DisplayName;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Icon;                                              // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_45;                                    // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FAccoladesRowHandle                   Accolade;                                          // 0x2A8(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UUMG_AccoladeTooltip_C*                Tooltip;                                           // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Complete;                                          // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUMG_AccoladeMissionProgress_C* GetDefaultObj();

	void InitAccolade(class UUMG_AccoladeTooltip_C* CallFunc_Create_ReturnValue, const struct FAccoladeData& CallFunc_GetAccoladesStruct_Accolades, enum class EValid CallFunc_GetAccoladesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateState(const TArray<struct FAccoladeTaskState>& TaskStates, class UAccoladeSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, class UAccoladeSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, TArray<struct FAccoladeTaskState>& CallFunc_GetAccoladeTaskStates_ReturnValue, int32 CallFunc_GetAccoladeProgress_CurrentValue, int32 CallFunc_GetAccoladeProgress_MaxValue, const struct FDateTime& CallFunc_GetAccoladeProgress_TimeCompleted, bool CallFunc_GetAccoladeProgress_ReturnValue, float K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Min_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, float CallFunc_Divide_FloatFloat_ReturnValue, class FText CallFunc_Format_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_IsTaskListAccolade_ReturnValue);
	void Finished_ECE88B094DF845745D1F47869C29E97C();
	void Construct();
	void PlayCompleteAnimation();
	void ExecuteUbergraph_UMG_AccoladeMissionProgress(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


