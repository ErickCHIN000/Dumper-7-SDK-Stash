#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_NavBar_News_PatchNotes.WBP_NavBar_News_PatchNotes_C
// (None)

class UClass* UWBP_NavBar_News_PatchNotes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_NavBar_News_PatchNotes_C");

	return Clss;
}


// WBP_NavBar_News_PatchNotes_C WBP_NavBar_News_PatchNotes.Default__WBP_NavBar_News_PatchNotes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_NavBar_News_PatchNotes_C* UWBP_NavBar_News_PatchNotes_C::GetDefaultObj()
{
	static class UWBP_NavBar_News_PatchNotes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_NavBar_News_PatchNotes_C*>(UWBP_NavBar_News_PatchNotes_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_NavBar_News_PatchNotes.WBP_NavBar_News_PatchNotes_C.ShowCredits
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXLocalPlayer*             CallFunc_GetOwningLocalPlayer_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Credits_Screen_C*       CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_NavBar_News_PatchNotes_C::ShowCredits(class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UWBP_Credits_Screen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NavBar_News_PatchNotes_C", "ShowCredits");

	Params::UWBP_NavBar_News_PatchNotes_C_ShowCredits_Params Parms{};

	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue = CallFunc_GetOwningLocalPlayer_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NavBar_News_PatchNotes.WBP_NavBar_News_PatchNotes_C.OnLoginStateChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_UILoginState          UILoginState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_UILoginState          L_MinimumAllowedLoginState                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_ByteByte_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NavBar_News_PatchNotes_C::OnLoginStateChanged(enum class E_UILoginState UILoginState, enum class E_UILoginState L_MinimumAllowedLoginState, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, bool CallFunc_GreaterEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NavBar_News_PatchNotes_C", "OnLoginStateChanged");

	Params::UWBP_NavBar_News_PatchNotes_C_OnLoginStateChanged_Params Parms{};

	Parms.UILoginState = UILoginState;
	Parms.L_MinimumAllowedLoginState = L_MinimumAllowedLoginState;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GreaterEqual_ByteByte_ReturnValue = CallFunc_GreaterEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NavBar_News_PatchNotes.WBP_NavBar_News_PatchNotes_C.ShowPatchNotes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXLocalPlayer*             CallFunc_GetOwningLocalPlayer_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_PatchNotes_C*           CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_NavBar_News_PatchNotes_C::ShowPatchNotes(class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UWBP_PatchNotes_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NavBar_News_PatchNotes_C", "ShowPatchNotes");

	Params::UWBP_NavBar_News_PatchNotes_C_ShowPatchNotes_Params Parms{};

	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue = CallFunc_GetOwningLocalPlayer_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NavBar_News_PatchNotes.WBP_NavBar_News_PatchNotes_C.Options
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXLocalPlayer*             CallFunc_GetOwningLocalPlayer_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Options_StartScreen_C*  CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_NavBar_News_PatchNotes_C::Options(class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UWBP_Options_StartScreen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NavBar_News_PatchNotes_C", "Options");

	Params::UWBP_NavBar_News_PatchNotes_C_Options_Params Parms{};

	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue = CallFunc_GetOwningLocalPlayer_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NavBar_News_PatchNotes.WBP_NavBar_News_PatchNotes_C.ShowMotD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXLocalPlayer*             CallFunc_GetOwningLocalPlayer_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_MotdScreen_C*           CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_NavBar_News_PatchNotes_C::ShowMotD(class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UWBP_MotdScreen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NavBar_News_PatchNotes_C", "ShowMotD");

	Params::UWBP_NavBar_News_PatchNotes_C_ShowMotD_Params Parms{};

	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue = CallFunc_GetOwningLocalPlayer_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NavBar_News_PatchNotes.WBP_NavBar_News_PatchNotes_C.BndEvt__WBP_NavBar_News_PatchNotes_Bottom_NavBar_K2Node_ComponentBoundEvent_0_NavBar_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ButtonLabel                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NavBar_News_PatchNotes_C::BndEvt__WBP_NavBar_News_PatchNotes_Bottom_NavBar_K2Node_ComponentBoundEvent_0_NavBar_ButtonClicked__DelegateSignature(class FText ButtonLabel, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NavBar_News_PatchNotes_C", "BndEvt__WBP_NavBar_News_PatchNotes_Bottom_NavBar_K2Node_ComponentBoundEvent_0_NavBar_ButtonClicked__DelegateSignature");

	Params::UWBP_NavBar_News_PatchNotes_C_BndEvt__WBP_NavBar_News_PatchNotes_Bottom_NavBar_K2Node_ComponentBoundEvent_0_NavBar_ButtonClicked__DelegateSignature_Params Parms{};

	Parms.ButtonLabel = ButtonLabel;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NavBar_News_PatchNotes.WBP_NavBar_News_PatchNotes_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_NavBar_News_PatchNotes_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NavBar_News_PatchNotes_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_NavBar_News_PatchNotes.WBP_NavBar_News_PatchNotes_C.SwitchToLogoutButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_NavBar_News_PatchNotes_C::SwitchToLogoutButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NavBar_News_PatchNotes_C", "SwitchToLogoutButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_NavBar_News_PatchNotes.WBP_NavBar_News_PatchNotes_C.ExecuteUbergraph_WBP_NavBar_News_PatchNotes
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_ButtonLabel                           (None)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXUILoginSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUILoginInfo                CallFunc_GetInfo_ReturnValue                                     (ConstParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NavBar_News_PatchNotes_C::ExecuteUbergraph_WBP_NavBar_News_PatchNotes(int32 EntryPoint, class FText K2Node_ComponentBoundEvent_ButtonLabel, int32 K2Node_ComponentBoundEvent_Index, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchInteger_CmpSuccess, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FUILoginInfo& CallFunc_GetInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NavBar_News_PatchNotes_C", "ExecuteUbergraph_WBP_NavBar_News_PatchNotes");

	Params::UWBP_NavBar_News_PatchNotes_C_ExecuteUbergraph_WBP_NavBar_News_PatchNotes_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_ButtonLabel = K2Node_ComponentBoundEvent_ButtonLabel;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetInfo_ReturnValue = CallFunc_GetInfo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NavBar_News_PatchNotes.WBP_NavBar_News_PatchNotes_C.CloseNavBarNews__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_NavBar_News_PatchNotes_C::CloseNavBarNews__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NavBar_News_PatchNotes_C", "CloseNavBarNews__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


