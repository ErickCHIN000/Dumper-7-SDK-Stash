#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass InstructionsNotifyWidget.InstructionsNotifyWidget_C
// (None)

class UClass* UInstructionsNotifyWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InstructionsNotifyWidget_C");

	return Clss;
}


// InstructionsNotifyWidget_C InstructionsNotifyWidget.Default__InstructionsNotifyWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInstructionsNotifyWidget_C* UInstructionsNotifyWidget_C::GetDefaultObj()
{
	static class UInstructionsNotifyWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInstructionsNotifyWidget_C*>(UInstructionsNotifyWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InstructionsNotifyWidget.InstructionsNotifyWidget_C.OpenJournal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_CharInventory_C>K2Node_DynamicCast_AsBPI_Char_Inventory                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ICharacterUIInterface_C>CallFunc_BPI_Get_Character_UI_CharacterUI                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInstructionsNotifyWidget_C::OpenJournal(TScriptInterface<class IBPI_CharInventory_C> K2Node_DynamicCast_AsBPI_Char_Inventory, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class ICharacterUIInterface_C> CallFunc_BPI_Get_Character_UI_CharacterUI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstructionsNotifyWidget_C", "OpenJournal");

	Params::UInstructionsNotifyWidget_C_OpenJournal_Params Parms{};

	Parms.K2Node_DynamicCast_AsBPI_Char_Inventory = K2Node_DynamicCast_AsBPI_Char_Inventory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BPI_Get_Character_UI_CharacterUI = CallFunc_BPI_Get_Character_UI_CharacterUI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InstructionsNotifyWidget.InstructionsNotifyWidget_C.ShowNotify
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInstructionsInfoData       CallFunc_GetInstructionData_result                               (None)
// bool                               CallFunc_GetInstructionData_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInstructionsNotifyWidget_C::ShowNotify(class FName ID, bool CallFunc_IsValid_ReturnValue, const struct FInstructionsInfoData& CallFunc_GetInstructionData_result, bool CallFunc_GetInstructionData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstructionsNotifyWidget_C", "ShowNotify");

	Params::UInstructionsNotifyWidget_C_ShowNotify_Params Parms{};

	Parms.ID = ID;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetInstructionData_result = CallFunc_GetInstructionData_result;
	Parms.CallFunc_GetInstructionData_ReturnValue = CallFunc_GetInstructionData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InstructionsNotifyWidget.InstructionsNotifyWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInstructionsNotifyWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstructionsNotifyWidget_C", "Tick");

	Params::UInstructionsNotifyWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InstructionsNotifyWidget.InstructionsNotifyWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UInstructionsNotifyWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstructionsNotifyWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InstructionsNotifyWidget.InstructionsNotifyWidget_C.OnJPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UInstructionsNotifyWidget_C::OnJPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstructionsNotifyWidget_C", "OnJPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InstructionsNotifyWidget.InstructionsNotifyWidget_C.OnJReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UInstructionsNotifyWidget_C::OnJReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstructionsNotifyWidget_C", "OnJReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InstructionsNotifyWidget.InstructionsNotifyWidget_C.OnShowTutorial_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        InstructionID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInstructionsNotifyWidget_C::OnShowTutorial_Event_0(class FName InstructionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstructionsNotifyWidget_C", "OnShowTutorial_Event_0");

	Params::UInstructionsNotifyWidget_C_OnShowTutorial_Event_0_Params Parms{};

	Parms.InstructionID = InstructionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InstructionsNotifyWidget.InstructionsNotifyWidget_C.OnHidden
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UInstructionsNotifyWidget_C::OnHidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstructionsNotifyWidget_C", "OnHidden");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InstructionsNotifyWidget.InstructionsNotifyWidget_C.ExecuteUbergraph_InstructionsNotifyWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class ASHPlayerCharacter*          K2Node_DynamicCast_AsSHPlayer_Character                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_InstructionID                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInstructionsNotifyWidget_C::ExecuteUbergraph_InstructionsNotifyWidget(int32 EntryPoint, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class FName K2Node_CustomEvent_InstructionID, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstructionsNotifyWidget_C", "ExecuteUbergraph_InstructionsNotifyWidget");

	Params::UInstructionsNotifyWidget_C_ExecuteUbergraph_InstructionsNotifyWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsSHPlayer_Character = K2Node_DynamicCast_AsSHPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CustomEvent_InstructionID = K2Node_CustomEvent_InstructionID;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


