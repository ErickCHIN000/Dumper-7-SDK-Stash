#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Vehicle_Sedan.BP_Vehicle_Sedan_C
// (Actor, Pawn)

class UClass* ABP_Vehicle_Sedan_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Vehicle_Sedan_C");

	return Clss;
}


// BP_Vehicle_Sedan_C BP_Vehicle_Sedan.Default__BP_Vehicle_Sedan_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Vehicle_Sedan_C* ABP_Vehicle_Sedan_C::GetDefaultObj()
{
	static class ABP_Vehicle_Sedan_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Vehicle_Sedan_C*>(ABP_Vehicle_Sedan_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Vehicle_Sedan.BP_Vehicle_Sedan_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Vehicle_Sedan_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Vehicle_Sedan_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Vehicle_Sedan.BP_Vehicle_Sedan_C.OnVehicleAppearanceChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGVehicle*                  Vehicle                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      AppearanceString                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_Vehicle_Sedan_C::OnVehicleAppearanceChanged(class AGGVehicle* Vehicle, const class FString& RowName, const class FString& AppearanceString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Vehicle_Sedan_C", "OnVehicleAppearanceChanged");

	Params::ABP_Vehicle_Sedan_C_OnVehicleAppearanceChanged_Params Parms{};

	Parms.Vehicle = Vehicle;
	Parms.RowName = RowName;
	Parms.AppearanceString = AppearanceString;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Vehicle_Sedan.BP_Vehicle_Sedan_C.ExecuteUbergraph_BP_Vehicle_Sedan
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AGGVehicle*                  K2Node_CustomEvent_Vehicle                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_RowName                                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_AppearanceString                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Vehicle_Sedan_C::ExecuteUbergraph_BP_Vehicle_Sedan(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGGVehicle* K2Node_CustomEvent_Vehicle, const class FString& K2Node_CustomEvent_RowName, const class FString& K2Node_CustomEvent_AppearanceString, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Vehicle_Sedan_C", "ExecuteUbergraph_BP_Vehicle_Sedan");

	Params::ABP_Vehicle_Sedan_C_ExecuteUbergraph_BP_Vehicle_Sedan_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Vehicle = K2Node_CustomEvent_Vehicle;
	Parms.K2Node_CustomEvent_RowName = K2Node_CustomEvent_RowName;
	Parms.K2Node_CustomEvent_AppearanceString = K2Node_CustomEvent_AppearanceString;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


