#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IFeat_Necromancer.IFeat_Necromancer_C
// (None)

class UClass* IIFeat_Necromancer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IFeat_Necromancer_C");

	return Clss;
}


// IFeat_Necromancer_C IFeat_Necromancer.Default__IFeat_Necromancer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIFeat_Necromancer_C* IIFeat_Necromancer_C::GetDefaultObj()
{
	static class IIFeat_Necromancer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIFeat_Necromancer_C*>(IIFeat_Necromancer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IFeat_Necromancer.IFeat_Necromancer_C.SpawnDemiLich
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SpawnedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPetInfo                    PetData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIFeat_Necromancer_C::SpawnDemiLich(class AActor* SpawnedActor, const struct FPetInfo& PetData, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_Necromancer_C", "SpawnDemiLich");

	Params::IIFeat_Necromancer_C_SpawnDemiLich_Params Parms{};

	Parms.SpawnedActor = SpawnedActor;
	Parms.PetData = PetData;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IFeat_Necromancer.IFeat_Necromancer_C.GetDemiLichDrone
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADrone_PlayerCompanionParent_C*Ref                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIFeat_Necromancer_C::GetDemiLichDrone(class ADrone_PlayerCompanionParent_C** Ref)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_Necromancer_C", "GetDemiLichDrone");

	Params::IIFeat_Necromancer_C_GetDemiLichDrone_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Ref != nullptr)
		*Ref = Parms.Ref;

}


// Function IFeat_Necromancer.IFeat_Necromancer_C.DespawnDemiLich
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Pet                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPetReleaseReason       Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIFeat_Necromancer_C::DespawnDemiLich(class AActor* Pet, enum class EPetReleaseReason Reason, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_Necromancer_C", "DespawnDemiLich");

	Params::IIFeat_Necromancer_C_DespawnDemiLich_Params Parms{};

	Parms.Pet = Pet;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IFeat_Necromancer.IFeat_Necromancer_C.GetDemiLich
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Ref                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIFeat_Necromancer_C::GetDemiLich(class AActor** Ref)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_Necromancer_C", "GetDemiLich");

	Params::IIFeat_Necromancer_C_GetDemiLich_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Ref != nullptr)
		*Ref = Parms.Ref;

}

}


