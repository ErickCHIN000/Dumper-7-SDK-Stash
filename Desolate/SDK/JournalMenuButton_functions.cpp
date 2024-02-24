#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass JournalMenuButton.JournalMenuButton_C
// (None)

class UClass* UJournalMenuButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JournalMenuButton_C");

	return Clss;
}


// JournalMenuButton_C JournalMenuButton.Default__JournalMenuButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UJournalMenuButton_C* UJournalMenuButton_C::GetDefaultObj()
{
	static class UJournalMenuButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UJournalMenuButton_C*>(UJournalMenuButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function JournalMenuButton.JournalMenuButton_C.SetNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Notify                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_DynamicCast_AsSHPlayer_Character                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UJournalMenuButton_C::SetNotify(bool Notify, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JournalMenuButton_C", "SetNotify");

	Params::UJournalMenuButton_C_SetNotify_Params Parms{};

	Parms.Notify = Notify;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsSHPlayer_Character = K2Node_DynamicCast_AsSHPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JournalMenuButton.JournalMenuButton_C.Get_SelectedImage_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UJournalMenuButton_C::Get_SelectedImage_Visibility_0(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JournalMenuButton_C", "Get_SelectedImage_Visibility_0");

	Params::UJournalMenuButton_C_Get_SelectedImage_Visibility_0_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function JournalMenuButton.JournalMenuButton_C.Get_FocusedImage_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UJournalMenuButton_C::Get_FocusedImage_Visibility_0(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JournalMenuButton_C", "Get_FocusedImage_Visibility_0");

	Params::UJournalMenuButton_C_Get_FocusedImage_Visibility_0_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function JournalMenuButton.JournalMenuButton_C.UpdateView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJournalMenuButton_C::UpdateView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JournalMenuButton_C", "UpdateView");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JournalMenuButton.JournalMenuButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UJournalMenuButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JournalMenuButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JournalMenuButton.JournalMenuButton_C.OnSynchronizeProperties
// (Event, Public, BlueprintEvent)
// Parameters:

void UJournalMenuButton_C::OnSynchronizeProperties()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JournalMenuButton_C", "OnSynchronizeProperties");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JournalMenuButton.JournalMenuButton_C.BndEvt__SHButton_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UJournalMenuButton_C::BndEvt__SHButton_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JournalMenuButton_C", "BndEvt__SHButton_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JournalMenuButton.JournalMenuButton_C.RemoveFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UJournalMenuButton_C::RemoveFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JournalMenuButton_C", "RemoveFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JournalMenuButton.JournalMenuButton_C.ExecuteUbergraph_JournalMenuButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_DynamicCast_AsSHPlayer_Character                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsNeedQuestNotifyShow_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UJournalMenuButton_C::ExecuteUbergraph_JournalMenuButton(int32 EntryPoint, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsNeedQuestNotifyShow_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JournalMenuButton_C", "ExecuteUbergraph_JournalMenuButton");

	Params::UJournalMenuButton_C_ExecuteUbergraph_JournalMenuButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsSHPlayer_Character = K2Node_DynamicCast_AsSHPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsNeedQuestNotifyShow_ReturnValue = CallFunc_IsNeedQuestNotifyShow_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


