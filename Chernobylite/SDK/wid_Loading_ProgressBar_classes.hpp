#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x49 (0x2A9 - 0x260)
// WidgetBlueprintGeneratedClass wid_Loading_ProgressBar.wid_Loading_ProgressBar_C
class UWid_Loading_ProgressBar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UProgressBar*                          LoadingProgress;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        Fill;                                              // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLoading;                                         // 0x274(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F7D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            FinishedLoading;                                   // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        MaxFillPerTick;                                    // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxDefaultFill;                                    // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UpdateAtUnshownFill;                               // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UnshownFill;                                       // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastFillCheck;                                     // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PreviousFillCheck;                                 // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFauxFinishLoading;                               // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsTransitional;                                    // 0x2A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F94[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxTransitionalFill;                               // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallTrasitionalFinished;                           // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_Loading_ProgressBar_C* GetDefaultObj();

	void FinishTransitional();
	void SetIsTransitional(bool IsTransitional);
	void StartQuickFinish();
	void UpdateProgressBarValue(float CallFunc_Divide_FloatFloat_ReturnValue);
	void TryAcceptUnshownFill(float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void UpdateUnshownFill(float FillSpeed, float CallFunc_GetFillCheckDelta_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	float GetFillCheckDelta(float CallFunc_Subtract_FloatFloat_ReturnValue);
	void UpdateLastFillCheck(bool Init, int32 CallFunc_GetAccurateRealTime_Seconds, float CallFunc_GetAccurateRealTime_PartialSeconds, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void MakeNewUpdateAtDifference(float CallFunc_RandomFloatInRange_ReturnValue);
	void Start(bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Progress(float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void Finish();
	void StopAndHide();
	void ExecuteUbergraph_wid_Loading_ProgressBar(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void FinishedLoading__DelegateSignature();
};

}


