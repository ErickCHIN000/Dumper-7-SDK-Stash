#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FirearmComponent.FirearmComponent_C
// (None)

class UClass* UFirearmComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FirearmComponent_C");

	return Clss;
}


// FirearmComponent_C FirearmComponent.Default__FirearmComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFirearmComponent_C* UFirearmComponent_C::GetDefaultObj()
{
	static class UFirearmComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFirearmComponent_C*>(UFirearmComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FirearmComponent.FirearmComponent_C.SetCurrentCompensator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CurrentCompensator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Compensator_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFirearmComponent_C::SetCurrentCompensator(class FName CurrentCompensator, bool Compensator_, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirearmComponent_C", "SetCurrentCompensator");

	Params::UFirearmComponent_C_SetCurrentCompensator_Params Parms{};

	Parms.CurrentCompensator = CurrentCompensator;
	Parms.Compensator_ = Compensator_;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirearmComponent.FirearmComponent_C.SetCurrentSuppressor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CurrentSuppressor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Suppressor_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFirearmComponent_C::SetCurrentSuppressor(class FName CurrentSuppressor, bool Suppressor_, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirearmComponent_C", "SetCurrentSuppressor");

	Params::UFirearmComponent_C_SetCurrentSuppressor_Params Parms{};

	Parms.CurrentSuppressor = CurrentSuppressor;
	Parms.Suppressor_ = Suppressor_;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirearmComponent.FirearmComponent_C.SetCurrentForegrip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CurrentForegrip                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Foregrip_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFirearmComponent_C::SetCurrentForegrip(class FName CurrentForegrip, bool Foregrip_, bool CallFunc_Map_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirearmComponent_C", "SetCurrentForegrip");

	Params::UFirearmComponent_C_SetCurrentForegrip_Params Parms{};

	Parms.CurrentForegrip = CurrentForegrip;
	Parms.Foregrip_ = Foregrip_;
	Parms.CallFunc_Map_Contains_ReturnValue = CallFunc_Map_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirearmComponent.FirearmComponent_C.SetCurrentSight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CurrentSight                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Sight_                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFirearmComponent_C::SetCurrentSight(class FName CurrentSight, bool Sight_, bool CallFunc_Map_Contains_ReturnValue, bool CallFunc_Map_Contains_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirearmComponent_C", "SetCurrentSight");

	Params::UFirearmComponent_C_SetCurrentSight_Params Parms{};

	Parms.CurrentSight = CurrentSight;
	Parms.Sight_ = Sight_;
	Parms.CallFunc_Map_Contains_ReturnValue = CallFunc_Map_Contains_ReturnValue;
	Parms.CallFunc_Map_Contains_ReturnValue_1 = CallFunc_Map_Contains_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirearmComponent.FirearmComponent_C.GetSight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Sight                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Zoom                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LongRange_                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ID                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFirearmComponent_C::GetSight(bool* Sight, double* Zoom, bool* LongRange_, class FName* ID, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirearmComponent_C", "GetSight");

	Params::UFirearmComponent_C_GetSight_Params Parms{};

	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Sight != nullptr)
		*Sight = Parms.Sight;

	if (Zoom != nullptr)
		*Zoom = Parms.Zoom;

	if (LongRange_ != nullptr)
		*LongRange_ = Parms.LongRange_;

	if (ID != nullptr)
		*ID = Parms.ID;

}


// Function FirearmComponent.FirearmComponent_C.GetCompensator
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CompensatorAttached_                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFirearmComponent_C::GetCompensator(bool* CompensatorAttached_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirearmComponent_C", "GetCompensator");

	Params::UFirearmComponent_C_GetCompensator_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CompensatorAttached_ != nullptr)
		*CompensatorAttached_ = Parms.CompensatorAttached_;

}


// Function FirearmComponent.FirearmComponent_C.GetSuppressor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               SuppressorAttached_                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFirearmComponent_C::GetSuppressor(bool* SuppressorAttached_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirearmComponent_C", "GetSuppressor");

	Params::UFirearmComponent_C_GetSuppressor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SuppressorAttached_ != nullptr)
		*SuppressorAttached_ = Parms.SuppressorAttached_;

}


// Function FirearmComponent.FirearmComponent_C.GetForegrip
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             ForegripVertical                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ForegripHorizontal                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFirearmComponent_C::GetForegrip(double* ForegripVertical, double* ForegripHorizontal, const struct FVector2D& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirearmComponent_C", "GetForegrip");

	Params::UFirearmComponent_C_GetForegrip_Params Parms{};

	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;

	UObject::ProcessEvent(Func, &Parms);

	if (ForegripVertical != nullptr)
		*ForegripVertical = Parms.ForegripVertical;

	if (ForegripHorizontal != nullptr)
		*ForegripHorizontal = Parms.ForegripHorizontal;

}

}


