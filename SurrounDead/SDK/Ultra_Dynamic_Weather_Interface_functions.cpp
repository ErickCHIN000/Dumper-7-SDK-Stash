#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C
// (None)

class UClass* IUltra_Dynamic_Weather_Interface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ultra_Dynamic_Weather_Interface_C");

	return Clss;
}


// Ultra_Dynamic_Weather_Interface_C Ultra_Dynamic_Weather_Interface.Default__Ultra_Dynamic_Weather_Interface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IUltra_Dynamic_Weather_Interface_C* IUltra_Dynamic_Weather_Interface_C::GetDefaultObj()
{
	static class IUltra_Dynamic_Weather_Interface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IUltra_Dynamic_Weather_Interface_C*>(IUltra_Dynamic_Weather_Interface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Set Up Rainbow MID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUltra_Dynamic_Weather_Interface_C::Set_Up_Rainbow_MID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Set Up Rainbow MID");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Rainbow MID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               Rainbow_Enabled                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    Mid                                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IUltra_Dynamic_Weather_Interface_C::Get_Rainbow_MID(bool* Rainbow_Enabled, class UMaterialInstanceDynamic** Mid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Get Rainbow MID");

	Params::IUltra_Dynamic_Weather_Interface_C_Get_Rainbow_MID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Rainbow_Enabled != nullptr)
		*Rainbow_Enabled = Parms.Rainbow_Enabled;

	if (Mid != nullptr)
		*Mid = Parms.Mid;

}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Intended Water Level
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Using_Water_Level                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Water_Level                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUltra_Dynamic_Weather_Interface_C::Get_Intended_Water_Level(bool* Using_Water_Level, double* Water_Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Get Intended Water Level");

	Params::IUltra_Dynamic_Weather_Interface_C_Get_Intended_Water_Level_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Using_Water_Level != nullptr)
		*Using_Water_Level = Parms.Using_Water_Level;

	if (Water_Level != nullptr)
		*Water_Level = Parms.Water_Level;

}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Update Rainbow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUltra_Dynamic_Weather_Interface_C::Update_Rainbow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Update Rainbow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Set Project Mode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUDS_Project_Mode       Mode                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUltra_Dynamic_Weather_Interface_C::Set_Project_Mode(enum class EUDS_Project_Mode Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Set Project Mode");

	Params::IUltra_Dynamic_Weather_Interface_C_Set_Project_Mode_Params Parms{};

	Parms.Mode = Mode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Weather Particle Collision Channel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECollisionChannel       Channel                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUltra_Dynamic_Weather_Interface_C::Get_Weather_Particle_Collision_Channel(enum class ECollisionChannel* Channel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Get Weather Particle Collision Channel");

	Params::IUltra_Dynamic_Weather_Interface_C_Get_Weather_Particle_Collision_Channel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Channel != nullptr)
		*Channel = Parms.Channel;

}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Hard Refresh Cached Properties
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUltra_Dynamic_Weather_Interface_C::Hard_Refresh_Cached_Properties()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Hard Refresh Cached Properties");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Destroy Close Thunder Component
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IUltra_Dynamic_Weather_Interface_C::Destroy_Close_Thunder_Component(class USceneComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Destroy Close Thunder Component");

	Params::IUltra_Dynamic_Weather_Interface_C_Destroy_Close_Thunder_Component_Params Parms{};

	Parms.Component = Component;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Close Thunder Sound Occlusion
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Volume                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LPF                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUltra_Dynamic_Weather_Interface_C::Get_Close_Thunder_Sound_Occlusion(double* Volume, double* LPF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Get Close Thunder Sound Occlusion");

	Params::IUltra_Dynamic_Weather_Interface_C_Get_Close_Thunder_Sound_Occlusion_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Volume != nullptr)
		*Volume = Parms.Volume;

	if (LPF != nullptr)
		*LPF = Parms.LPF;

}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Update Material Effects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUltra_Dynamic_Weather_Interface_C::Update_Material_Effects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Update Material Effects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Apply State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUDS_and_UDW_State          State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void IUltra_Dynamic_Weather_Interface_C::Apply_State(const struct FUDS_and_UDW_State& State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Apply State");

	Params::IUltra_Dynamic_Weather_Interface_C_Apply_State_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get State for Saving
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUDS_and_UDW_State          UDW_State                                                        (Parm, OutParm, HasGetValueTypeHash)

void IUltra_Dynamic_Weather_Interface_C::Get_State_for_Saving(struct FUDS_and_UDW_State* UDW_State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Get State for Saving");

	Params::IUltra_Dynamic_Weather_Interface_C_Get_State_for_Saving_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (UDW_State != nullptr)
		*UDW_State = std::move(Parms.UDW_State);

}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Intended Cloud Direction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Intended_Cloud_Direction                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUltra_Dynamic_Weather_Interface_C::Get_Intended_Cloud_Direction(double* Intended_Cloud_Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Get Intended Cloud Direction");

	Params::IUltra_Dynamic_Weather_Interface_C_Get_Intended_Cloud_Direction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Intended_Cloud_Direction != nullptr)
		*Intended_Cloud_Direction = Parms.Intended_Cloud_Direction;

}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Intended Cloud Speed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Intended_Cloud_Speed                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUltra_Dynamic_Weather_Interface_C::Get_Intended_Cloud_Speed(double* Intended_Cloud_Speed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Get Intended Cloud Speed");

	Params::IUltra_Dynamic_Weather_Interface_C_Get_Intended_Cloud_Speed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Intended_Cloud_Speed != nullptr)
		*Intended_Cloud_Speed = Parms.Intended_Cloud_Speed;

}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Update Weather Settings from UDS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Cloud_Coverage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Fog                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Dust                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUltra_Dynamic_Weather_Interface_C::Update_Weather_Settings_from_UDS(double Cloud_Coverage, double Fog, double Dust)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Update Weather Settings from UDS");

	Params::IUltra_Dynamic_Weather_Interface_C_Update_Weather_Settings_from_UDS_Params Parms{};

	Parms.Cloud_Coverage = Cloud_Coverage;
	Parms.Fog = Fog;
	Parms.Dust = Dust;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Initialize Weather
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUltra_Dynamic_Weather_Interface_C::Initialize_Weather()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Initialize Weather");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Set Season
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUltra_Dynamic_Weather_Interface_C::Set_Season()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Set Season");



	UObject::ProcessEvent(Func, nullptr);

}

}


