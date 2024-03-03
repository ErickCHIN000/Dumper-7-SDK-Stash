#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_NPC_Controller.BPI_NPC_Controller_C
// (None)

class UClass* IBPI_NPC_Controller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_NPC_Controller_C");

	return Clss;
}


// BPI_NPC_Controller_C BPI_NPC_Controller.Default__BPI_NPC_Controller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_NPC_Controller_C* IBPI_NPC_Controller_C::GetDefaultObj()
{
	static class IBPI_NPC_Controller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_NPC_Controller_C*>(IBPI_NPC_Controller_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_NPC_Controller.BPI_NPC_Controller_C.fnUnpauseRoutine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_NPC_Controller_C::FnUnpauseRoutine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPC_Controller_C", "fnUnpauseRoutine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_NPC_Controller.BPI_NPC_Controller_C.fnPauseRoutine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_NPC_Controller_C::FnPauseRoutine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPC_Controller_C", "fnPauseRoutine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_NPC_Controller.BPI_NPC_Controller_C.fnSetOcclusionVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Player_Reference                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_Visible                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_NPC_Controller_C::FnSetOcclusionVisibility(class AActor* Player_Reference, bool Is_Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPC_Controller_C", "fnSetOcclusionVisibility");

	Params::IBPI_NPC_Controller_C_FnSetOcclusionVisibility_Params Parms{};

	Parms.Player_Reference = Player_Reference;
	Parms.Is_Visible = Is_Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_NPC_Controller.BPI_NPC_Controller_C.fnInterruptRoutine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_NPC_ProfilesList    Profiles                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FVector2D                   Duration_Range__Min__Max_                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Permanent_Change                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_NPC_Controller_C::FnInterruptRoutine(const struct FStruct_NPC_ProfilesList& Profiles, const struct FVector2D& Duration_Range__Min__Max_, bool Permanent_Change)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPC_Controller_C", "fnInterruptRoutine");

	Params::IBPI_NPC_Controller_C_FnInterruptRoutine_Params Parms{};

	Parms.Profiles = Profiles;
	Parms.Duration_Range__Min__Max_ = Duration_Range__Min__Max_;
	Parms.Permanent_Change = Permanent_Change;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_NPC_Controller.BPI_NPC_Controller_C.fnArrivedAtStation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Station_Base_C*          Station_Reference                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_NPC_StationInfo     Station_Info                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void IBPI_NPC_Controller_C::FnArrivedAtStation(class ABP_Station_Base_C* Station_Reference, const struct FStruct_NPC_StationInfo& Station_Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPC_Controller_C", "fnArrivedAtStation");

	Params::IBPI_NPC_Controller_C_FnArrivedAtStation_Params Parms{};

	Parms.Station_Reference = Station_Reference;
	Parms.Station_Info = Station_Info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_NPC_Controller.BPI_NPC_Controller_C.fnArrivedAtPOI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NPC_POI_Base_C*          Parent_POI                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_NPC_Controller_C::FnArrivedAtPOI(class ABP_NPC_POI_Base_C* Parent_POI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPC_Controller_C", "fnArrivedAtPOI");

	Params::IBPI_NPC_Controller_C_FnArrivedAtPOI_Params Parms{};

	Parms.Parent_POI = Parent_POI;

	UObject::ProcessEvent(Func, &Parms);

}

}


