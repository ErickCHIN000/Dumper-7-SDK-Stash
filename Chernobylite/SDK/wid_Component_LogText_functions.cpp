#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Component_LogText.wid_Component_LogText_C
// (None)

class UClass* UWid_Component_LogText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Component_LogText_C");

	return Clss;
}


// wid_Component_LogText_C wid_Component_LogText.Default__wid_Component_LogText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Component_LogText_C* UWid_Component_LogText_C::GetDefaultObj()
{
	static class UWid_Component_LogText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Component_LogText_C*>(UWid_Component_LogText_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Component_LogText.wid_Component_LogText_C.InternalDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                  Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseBig                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_OnScreenLog_Panel  Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Component_LogText_C::InternalDisplay(class FText InText, class UTexture2D* Image, bool UseBig, enum class Enum_OnScreenLog_Panel Type, bool Temp_bool_Variable, bool CallFunc_NotEqual_ObjectObject_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Component_LogText_C", "InternalDisplay");

	Params::UWid_Component_LogText_C_InternalDisplay_Params Parms{};

	Parms.InText = InText;
	Parms.Image = Image;
	Parms.UseBig = UseBig;
	Parms.Type = Type;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Component_LogText.wid_Component_LogText_C.Show
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewInfluence                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseBig                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWid_Component_LogText_C::Show(float NewInfluence, bool UseBig, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Component_LogText_C", "Show");

	Params::UWid_Component_LogText_C_Show_Params Parms{};

	Parms.NewInfluence = NewInfluence;
	Parms.UseBig = UseBig;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Component_LogText.wid_Component_LogText_C.SetContent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                  Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseBig                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_OnScreenLog_Panel  Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Component_LogText_C::SetContent(class FText InText, class UTexture2D* Image, bool UseBig, enum class Enum_OnScreenLog_Panel Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Component_LogText_C", "SetContent");

	Params::UWid_Component_LogText_C_SetContent_Params Parms{};

	Parms.InText = InText;
	Parms.Image = Image;
	Parms.UseBig = UseBig;
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Component_LogText.wid_Component_LogText_C.FadedOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Component_LogText_C::FadedOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Component_LogText_C", "FadedOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Component_LogText.wid_Component_LogText_C.PrepareForKill
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Component_LogText_C::PrepareForKill(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Component_LogText_C", "PrepareForKill");

	Params::UWid_Component_LogText_C_PrepareForKill_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Component_LogText.wid_Component_LogText_C.ExecuteUbergraph_wid_Component_LogText
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_InText                                        (None)
// class UTexture2D*                  K2Node_CustomEvent_Image                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_UseBig                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_OnScreenLog_Panel  K2Node_CustomEvent_Type                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_WidgetCurveAnimation_Parent_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTime_Time                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Duration                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Component_LogText_C::ExecuteUbergraph_wid_Component_LogText(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class FText K2Node_CustomEvent_InText, class UTexture2D* K2Node_CustomEvent_Image, bool K2Node_CustomEvent_UseBig, enum class Enum_OnScreenLog_Panel K2Node_CustomEvent_Type, class Aba_WidgetCurveAnimation_Parent_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetTime_Time, float K2Node_CustomEvent_Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Component_LogText_C", "ExecuteUbergraph_wid_Component_LogText");

	Params::UWid_Component_LogText_C_ExecuteUbergraph_wid_Component_LogText_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.K2Node_CustomEvent_InText = K2Node_CustomEvent_InText;
	Parms.K2Node_CustomEvent_Image = K2Node_CustomEvent_Image;
	Parms.K2Node_CustomEvent_UseBig = K2Node_CustomEvent_UseBig;
	Parms.K2Node_CustomEvent_Type = K2Node_CustomEvent_Type;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTime_Time = CallFunc_GetTime_Time;
	Parms.K2Node_CustomEvent_Duration = K2Node_CustomEvent_Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Component_LogText.wid_Component_LogText_C.ReadyToDie__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_Component_LogText_C*    ReadyComponent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Component_LogText_C::ReadyToDie__DelegateSignature(class UWid_Component_LogText_C* ReadyComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Component_LogText_C", "ReadyToDie__DelegateSignature");

	Params::UWid_Component_LogText_C_ReadyToDie__DelegateSignature_Params Parms{};

	Parms.ReadyComponent = ReadyComponent;

	UObject::ProcessEvent(Func, &Parms);

}

}


