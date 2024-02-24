#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5D (0x2BD - 0x260)
// WidgetBlueprintGeneratedClass wid_Component_LogText.wid_Component_LogText_C
class UWid_Component_LogText_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      HideBig;                                           // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hide;                                              // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img;                                               // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Quest;                                             // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Small;                                             // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        TxtToShow;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ReadyToDie;                                        // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWidgetAnimation*                      NewVar_0;                                          // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Lifetime;                                          // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class Enum_OnScreenLog_Panel            LookUp;                                            // 0x2BC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_Component_LogText_C* GetDefaultObj();

	void InternalDisplay(class FText InText, class UTexture2D* Image, bool UseBig, enum class Enum_OnScreenLog_Panel Type, bool Temp_bool_Variable, bool CallFunc_NotEqual_ObjectObject_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void Show(float NewInfluence, bool UseBig, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SetContent(class FText InText, class UTexture2D* Image, bool UseBig, enum class Enum_OnScreenLog_Panel Type);
	void FadedOut();
	void PrepareForKill(float Duration);
	void ExecuteUbergraph_wid_Component_LogText(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class FText K2Node_CustomEvent_InText, class UTexture2D* K2Node_CustomEvent_Image, bool K2Node_CustomEvent_UseBig, enum class Enum_OnScreenLog_Panel K2Node_CustomEvent_Type, class Aba_WidgetCurveAnimation_Parent_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetTime_Time, float K2Node_CustomEvent_Duration);
	void ReadyToDie__DelegateSignature(class UWid_Component_LogText_C* ReadyComponent);
};

}


