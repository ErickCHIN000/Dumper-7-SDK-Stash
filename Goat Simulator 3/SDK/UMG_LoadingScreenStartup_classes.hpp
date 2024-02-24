#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1AC (0x6C4 - 0x518)
// WidgetBlueprintGeneratedClass UMG_LoadingScreenStartup.UMG_LoadingScreenStartup_C
class UUMG_LoadingScreenStartup_C : public UGGLoadingScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x518(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      SaveIconAnim;                                      // 0x520(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Show;                                              // 0x528(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x530(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              LegalOverlay;                                      // 0x538(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          LoadingScreenPanel;                                // 0x540(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LogoCSN;                                           // 0x548(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LogoCSP;                                           // 0x550(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LogoMobile;                                        // 0x558(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayCSN;                                        // 0x560(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayCSP;                                        // 0x568(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayMobile;                                     // 0x570(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              PhotosensitivityWarning;                           // 0x578(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SaveIcon;                                          // 0x580(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBoxUnrealLogo;                                // 0x588(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox;                                           // 0x590(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_2;                                         // 0x598(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextAnyKey;                                        // 0x5A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                UnrealLogo;                                        // 0x5A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                WarningIcon;                                       // 0x5B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLoadingScreenHint                    CurrentHint;                                       // 0x5B8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLoadingScreenHint                    LastHint;                                          // 0x608(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UTexture2D*>                    GoatTextureArray;                                  // 0x658(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        FadeInDuration;                                    // 0x668(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ShowDuration;                                      // 0x66C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeOutDuration;                                   // 0x670(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AnimationTime;                                     // 0x674(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AnimIndex;                                         // 0x678(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFinished;                                         // 0x67C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E85[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       WidgetsToFade;                                     // 0x680(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                        TotalTime;                                         // 0x690(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E89[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            StartupFlowFinished;                               // 0x698(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<float>                                ShowDurations;                                     // 0x6A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        ShowDurationMobile;                                // 0x6B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeOutDurationMobile;                             // 0x6BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeInDurationMobile;                              // 0x6C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_LoadingScreenStartup_C* GetDefaultObj();

	void GetShowDuration(float* Result, bool CallFunc_IsMobilePlatform_ReturnValue, float CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void SetNextAnimIndex(bool WasLastIndex, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void AnimateSaveIcon(float DeltaTime, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void SetAlpha(int32 WidgetIndex, float Alpha, bool CallFunc_Array_IsValidIndex_ReturnValue, class UWidget* CallFunc_Array_Get_Item);
	void GetCurrentAlpha(float* Alpha, float PhaseTime, float PhaseProgress, float CallFunc_GetShowDuration_Result, float CallFunc_GetShowDuration_Result_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Ease_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Ease_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnPostLoadMap(class UWorld* World);
	void Construct();
	void ExecuteUbergraph_UMG_LoadingScreenStartup(int32 EntryPoint, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetCurrentAlpha_Alpha, class UWorld* K2Node_Event_World, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue, float CallFunc_GetShowDuration_Result, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, TArray<class UWidget*>& K2Node_MakeArray_Array, TArray<class UWidget*>& K2Node_MakeArray_Array_1, bool CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided);
	void StartupFlowFinished__DelegateSignature();
};

}


