#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IFeat_Ranger.IFeat_Ranger_C
// (None)

class UClass* IIFeat_Ranger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IFeat_Ranger_C");

	return Clss;
}


// IFeat_Ranger_C IFeat_Ranger.Default__IFeat_Ranger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIFeat_Ranger_C* IIFeat_Ranger_C::GetDefaultObj()
{
	static class IIFeat_Ranger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIFeat_Ranger_C*>(IIFeat_Ranger_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IFeat_Ranger.IFeat_Ranger_C.DespawnMushroomCompanion
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Pet                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPetReleaseReason       Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIFeat_Ranger_C::DespawnMushroomCompanion(class AActor* Pet, enum class EPetReleaseReason Reason, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_Ranger_C", "DespawnMushroomCompanion");

	Params::IIFeat_Ranger_C_DespawnMushroomCompanion_Params Parms{};

	Parms.Pet = Pet;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IFeat_Ranger.IFeat_Ranger_C.GetMushroomCompanion
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Ref                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIFeat_Ranger_C::GetMushroomCompanion(class AActor** Ref, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_Ranger_C", "GetMushroomCompanion");

	Params::IIFeat_Ranger_C_GetMushroomCompanion_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Ref != nullptr)
		*Ref = Parms.Ref;

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IFeat_Ranger.IFeat_Ranger_C.SpawnMushroomCompanion
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SpawnedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPetInfo                    PetData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIFeat_Ranger_C::SpawnMushroomCompanion(class AActor* SpawnedActor, const struct FPetInfo& PetData, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_Ranger_C", "SpawnMushroomCompanion");

	Params::IIFeat_Ranger_C_SpawnMushroomCompanion_Params Parms{};

	Parms.SpawnedActor = SpawnedActor;
	Parms.PetData = PetData;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}

}


