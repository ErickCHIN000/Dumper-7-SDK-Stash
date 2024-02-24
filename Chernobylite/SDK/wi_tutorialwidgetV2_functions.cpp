#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wi_tutorialwidgetV2.wi_tutorialwidgetV2_C
// (None)

class UClass* UWi_tutorialwidgetV2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wi_tutorialwidgetV2_C");

	return Clss;
}


// wi_tutorialwidgetV2_C wi_tutorialwidgetV2.Default__wi_tutorialwidgetV2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWi_tutorialwidgetV2_C* UWi_tutorialwidgetV2_C::GetDefaultObj()
{
	static class UWi_tutorialwidgetV2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWi_tutorialwidgetV2_C*>(UWi_tutorialwidgetV2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wi_tutorialwidgetV2.wi_tutorialwidgetV2_C.InputBackPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWi_tutorialwidgetV2_C::InputBackPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wi_tutorialwidgetV2_C", "InputBackPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wi_tutorialwidgetV2.wi_tutorialwidgetV2_C.SetImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWi_tutorialwidgetV2_C::SetImage(class UClass* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wi_tutorialwidgetV2_C", "SetImage");

	Params::UWi_tutorialwidgetV2_C_SetImage_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wi_tutorialwidgetV2.wi_tutorialwidgetV2_C.InputAccept
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWi_tutorialwidgetV2_C::InputAccept()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wi_tutorialwidgetV2_C", "InputAccept");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wi_tutorialwidgetV2.wi_tutorialwidgetV2_C.InputAcceptPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWi_tutorialwidgetV2_C::InputAcceptPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wi_tutorialwidgetV2_C", "InputAcceptPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wi_tutorialwidgetV2.wi_tutorialwidgetV2_C.InputAcceptReleased
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWi_tutorialwidgetV2_C::InputAcceptReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wi_tutorialwidgetV2_C", "InputAcceptReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wi_tutorialwidgetV2.wi_tutorialwidgetV2_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWi_tutorialwidgetV2_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wi_tutorialwidgetV2_C", "Tick");

	Params::UWi_tutorialwidgetV2_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wi_tutorialwidgetV2.wi_tutorialwidgetV2_C.UnlockInput
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWi_tutorialwidgetV2_C::UnlockInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wi_tutorialwidgetV2_C", "UnlockInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wi_tutorialwidgetV2.wi_tutorialwidgetV2_C.Lock Input
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWi_tutorialwidgetV2_C::Lock_Input()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wi_tutorialwidgetV2_C", "Lock Input");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wi_tutorialwidgetV2.wi_tutorialwidgetV2_C.ExecuteUbergraph_wi_tutorialwidgetV2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_Texture                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRealTimeSeconds_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWi_tutorialwidgetV2_C::ExecuteUbergraph_wi_tutorialwidgetV2(int32 EntryPoint, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UClass* K2Node_CustomEvent_Texture, const class FString& CallFunc_GetClassDisplayName_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class FName CallFunc_Conv_StringToName_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUserWidget* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Add_FloatFloat_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, float CallFunc_GetRealTimeSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wi_tutorialwidgetV2_C", "ExecuteUbergraph_wi_tutorialwidgetV2");

	Params::UWi_tutorialwidgetV2_C_ExecuteUbergraph_wi_tutorialwidgetV2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CustomEvent_Texture = K2Node_CustomEvent_Texture;
	Parms.CallFunc_GetClassDisplayName_ReturnValue = CallFunc_GetClassDisplayName_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_GetRealTimeSeconds_ReturnValue = CallFunc_GetRealTimeSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


