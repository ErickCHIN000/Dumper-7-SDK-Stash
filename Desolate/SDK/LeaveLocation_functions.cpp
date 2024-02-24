#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeaveLocation.LeaveLocation_C
// (None)

class UClass* ULeaveLocation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeaveLocation_C");

	return Clss;
}


// LeaveLocation_C LeaveLocation.Default__LeaveLocation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeaveLocation_C* ULeaveLocation_C::GetDefaultObj()
{
	static class ULeaveLocation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeaveLocation_C*>(ULeaveLocation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LeaveLocation.LeaveLocation_C.CheckAlreadyLeaveLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      PawnActor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFound                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetOverlappingActors_OverlappingActors                  (ReferenceParm, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHLevelLocation*            K2Node_DynamicCast_AsSHLevel_Location                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULeaveLocation_C::CheckAlreadyLeaveLocation(class AActor* PawnActor, bool bFound, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_Array_Get_Item, class ASHLevelLocation* K2Node_DynamicCast_AsSHLevel_Location, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeaveLocation_C", "CheckAlreadyLeaveLocation");

	Params::ULeaveLocation_C_CheckAlreadyLeaveLocation_Params Parms{};

	Parms.PawnActor = PawnActor;
	Parms.bFound = bFound;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors = CallFunc_GetOverlappingActors_OverlappingActors;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsSHLevel_Location = K2Node_DynamicCast_AsSHLevel_Location;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveLocation.LeaveLocation_C.GetProgressMax
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ULeaveLocation_C::GetProgressMax()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeaveLocation_C", "GetProgressMax");

	Params::ULeaveLocation_C_GetProgressMax_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LeaveLocation.LeaveLocation_C.OnRemoveFromPlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaveLocation_C::OnRemoveFromPlayer(class ASHPlayerCharacter* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeaveLocation_C", "OnRemoveFromPlayer");

	Params::ULeaveLocation_C_OnRemoveFromPlayer_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveLocation.LeaveLocation_C.OnGivePlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaveLocation_C::OnGivePlayer(class ASHPlayerCharacter* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeaveLocation_C", "OnGivePlayer");

	Params::ULeaveLocation_C_OnGivePlayer_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveLocation.LeaveLocation_C.OnLeaveLocation_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Sender                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        LocationName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      NameKey                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ULeaveLocation_C::OnLeaveLocation_Event_0(class ASHPlayerCharacter* Sender, class FText LocationName, const class FString& NameKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeaveLocation_C", "OnLeaveLocation_Event_0");

	Params::ULeaveLocation_C_OnLeaveLocation_Event_0_Params Parms{};

	Parms.Sender = Sender;
	Parms.LocationName = LocationName;
	Parms.NameKey = NameKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveLocation.LeaveLocation_C.ExecuteUbergraph_LeaveLocation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_CustomEvent_Sender                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_LocationName                                  (None)
// class FString                      K2Node_CustomEvent_NameKey                                       (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class ASHPlayerCharacter*          K2Node_Event_Player_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_Event_Player                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULeaveLocation_C::ExecuteUbergraph_LeaveLocation(int32 EntryPoint, class ASHPlayerCharacter* K2Node_CustomEvent_Sender, class FText K2Node_CustomEvent_LocationName, const class FString& K2Node_CustomEvent_NameKey, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ASHPlayerCharacter* K2Node_Event_Player_1, class ASHPlayerCharacter* K2Node_Event_Player, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeaveLocation_C", "ExecuteUbergraph_LeaveLocation");

	Params::ULeaveLocation_C_ExecuteUbergraph_LeaveLocation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Sender = K2Node_CustomEvent_Sender;
	Parms.K2Node_CustomEvent_LocationName = K2Node_CustomEvent_LocationName;
	Parms.K2Node_CustomEvent_NameKey = K2Node_CustomEvent_NameKey;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_Player_1 = K2Node_Event_Player_1;
	Parms.K2Node_Event_Player = K2Node_Event_Player;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


