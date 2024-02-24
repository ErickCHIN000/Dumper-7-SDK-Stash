#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x278 - 0x260)
// WidgetBlueprintGeneratedClass UMG_ProgressBarAnimatedLayer.UMG_ProgressBarAnimatedLayer_C
class UUMG_ProgressBarAnimatedLayer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                          ProgressBar;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        Target;                                            // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Interp_Speed;                                      // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_ProgressBarAnimatedLayer_C* GetDefaultObj();

	void GetCurrent(float* Current);
	void IsAnimating(bool* Animating, bool CallFunc_NotEqual_FloatFloat_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetTarget(float Target, float Speed);
	void ExecuteUbergraph_UMG_ProgressBarAnimatedLayer(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_FInterpTo_Constant_ReturnValue, float K2Node_CustomEvent_Target, float K2Node_CustomEvent_Speed, bool CallFunc_EqualEqual_FloatFloat_ReturnValue);
};

}


