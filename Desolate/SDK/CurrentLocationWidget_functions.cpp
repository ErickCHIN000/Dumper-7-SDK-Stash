#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CurrentLocationWidget.CurrentLocationWidget_C
// (None)

class UClass* UCurrentLocationWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CurrentLocationWidget_C");

	return Clss;
}


// CurrentLocationWidget_C CurrentLocationWidget.Default__CurrentLocationWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCurrentLocationWidget_C* UCurrentLocationWidget_C::GetDefaultObj()
{
	static class UCurrentLocationWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCurrentLocationWidget_C*>(UCurrentLocationWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CurrentLocationWidget.CurrentLocationWidget_C.CheckStartingLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetOverlappingActors_OverlappingActors                  (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASHLevelLocation*            K2Node_DynamicCast_AsSHLevel_Location                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCurrentLocationWidget_C::CheckStartingLocation(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ASHLevelLocation* K2Node_DynamicCast_AsSHLevel_Location, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurrentLocationWidget_C", "CheckStartingLocation");

	Params::UCurrentLocationWidget_C_CheckStartingLocation_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors = CallFunc_GetOverlappingActors_OverlappingActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsSHLevel_Location = K2Node_DynamicCast_AsSHLevel_Location;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CurrentLocationWidget.CurrentLocationWidget_C.Get_SafeZone_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_FindTextInLocalizationTable_OutText                     (None)
// bool                               CallFunc_FindTextInLocalizationTable_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)

class FText UCurrentLocationWidget_C::Get_SafeZone_Text_0(class FText CallFunc_FindTextInLocalizationTable_OutText, bool CallFunc_FindTextInLocalizationTable_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurrentLocationWidget_C", "Get_SafeZone_Text_0");

	Params::UCurrentLocationWidget_C_Get_SafeZone_Text_0_Params Parms{};

	Parms.CallFunc_FindTextInLocalizationTable_OutText = CallFunc_FindTextInLocalizationTable_OutText;
	Parms.CallFunc_FindTextInLocalizationTable_ReturnValue = CallFunc_FindTextInLocalizationTable_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CurrentLocationWidget.CurrentLocationWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCurrentLocationWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurrentLocationWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CurrentLocationWidget.CurrentLocationWidget_C.OnEnterLocation_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Sender                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        LocationName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      NameKey                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCurrentLocationWidget_C::OnEnterLocation_Event_0(class ASHPlayerCharacter* Sender, class FText LocationName, const class FString& NameKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurrentLocationWidget_C", "OnEnterLocation_Event_0");

	Params::UCurrentLocationWidget_C_OnEnterLocation_Event_0_Params Parms{};

	Parms.Sender = Sender;
	Parms.LocationName = LocationName;
	Parms.NameKey = NameKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CurrentLocationWidget.CurrentLocationWidget_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Sender                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        LocationName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      NameKey                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCurrentLocationWidget_C::CustomEvent_0(class ASHPlayerCharacter* Sender, class FText LocationName, const class FString& NameKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurrentLocationWidget_C", "CustomEvent_0");

	Params::UCurrentLocationWidget_C_CustomEvent_0_Params Parms{};

	Parms.Sender = Sender;
	Parms.LocationName = LocationName;
	Parms.NameKey = NameKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CurrentLocationWidget.CurrentLocationWidget_C.ExecuteUbergraph_CurrentLocationWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_CustomEvent_Sender_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_LocationName_1                                (None)
// class FString                      K2Node_CustomEvent_NameKey_1                                     (ZeroConstructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_DynamicCast_AsSHPlayer_Character                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_FindTextInLocalizationTable_OutText                     (None)
// bool                               CallFunc_FindTextInLocalizationTable_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASHPlayerCharacter*          K2Node_CustomEvent_Sender                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_LocationName                                  (None)
// class FString                      K2Node_CustomEvent_NameKey                                       (ZeroConstructor, HasGetValueTypeHash)

void UCurrentLocationWidget_C::ExecuteUbergraph_CurrentLocationWidget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ASHPlayerCharacter* K2Node_CustomEvent_Sender_1, class FText K2Node_CustomEvent_LocationName_1, const class FString& K2Node_CustomEvent_NameKey_1, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_FindTextInLocalizationTable_OutText, bool CallFunc_FindTextInLocalizationTable_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class ASHPlayerCharacter* K2Node_CustomEvent_Sender, class FText K2Node_CustomEvent_LocationName, const class FString& K2Node_CustomEvent_NameKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurrentLocationWidget_C", "ExecuteUbergraph_CurrentLocationWidget");

	Params::UCurrentLocationWidget_C_ExecuteUbergraph_CurrentLocationWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_CustomEvent_Sender_1 = K2Node_CustomEvent_Sender_1;
	Parms.K2Node_CustomEvent_LocationName_1 = K2Node_CustomEvent_LocationName_1;
	Parms.K2Node_CustomEvent_NameKey_1 = K2Node_CustomEvent_NameKey_1;
	Parms.K2Node_DynamicCast_AsSHPlayer_Character = K2Node_DynamicCast_AsSHPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FindTextInLocalizationTable_OutText = CallFunc_FindTextInLocalizationTable_OutText;
	Parms.CallFunc_FindTextInLocalizationTable_ReturnValue = CallFunc_FindTextInLocalizationTable_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_CustomEvent_Sender = K2Node_CustomEvent_Sender;
	Parms.K2Node_CustomEvent_LocationName = K2Node_CustomEvent_LocationName;
	Parms.K2Node_CustomEvent_NameKey = K2Node_CustomEvent_NameKey;

	UObject::ProcessEvent(Func, &Parms);

}

}


