#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_CC_CharacterCustomization.BPI_CC_CharacterCustomization_C
// (None)

class UClass* IBPI_CC_CharacterCustomization_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_CC_CharacterCustomization_C");

	return Clss;
}


// BPI_CC_CharacterCustomization_C BPI_CC_CharacterCustomization.Default__BPI_CC_CharacterCustomization_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_CC_CharacterCustomization_C* IBPI_CC_CharacterCustomization_C::GetDefaultObj()
{
	static class IBPI_CC_CharacterCustomization_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_CC_CharacterCustomization_C*>(IBPI_CC_CharacterCustomization_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_CC_CharacterCustomization.BPI_CC_CharacterCustomization_C.cc_GetMeshReferences
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      FP_Fullbody_Clothing_Torso                                       (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      FP_Fullbody_Clothing_Legs                                        (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      FP_Fullbody_Clothing_Shoes                                       (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      FP_Fullbody_Clothing_Gloves                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      FP_Fullbody_Clothing_Gear                                        (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      FP_Body                                                          (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      FP_Arms                                                          (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      FP_Arms_Clothing_Torso                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      FP_Arms_Clothing_Gloves                                          (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      FP_Arms_Clothing_Gear                                            (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_CC_CharacterCustomization_C::Cc_GetMeshReferences(class USkeletalMeshComponent** FP_Fullbody_Clothing_Torso, class USkeletalMeshComponent** FP_Fullbody_Clothing_Legs, class USkeletalMeshComponent** FP_Fullbody_Clothing_Shoes, class USkeletalMeshComponent** FP_Fullbody_Clothing_Gloves, class USkeletalMeshComponent** FP_Fullbody_Clothing_Gear, class USkeletalMeshComponent** FP_Body, class USkeletalMeshComponent** FP_Arms, class USkeletalMeshComponent** FP_Arms_Clothing_Torso, class USkeletalMeshComponent** FP_Arms_Clothing_Gloves, class USkeletalMeshComponent** FP_Arms_Clothing_Gear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CC_CharacterCustomization_C", "cc_GetMeshReferences");

	Params::IBPI_CC_CharacterCustomization_C_Cc_GetMeshReferences_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FP_Fullbody_Clothing_Torso != nullptr)
		*FP_Fullbody_Clothing_Torso = Parms.FP_Fullbody_Clothing_Torso;

	if (FP_Fullbody_Clothing_Legs != nullptr)
		*FP_Fullbody_Clothing_Legs = Parms.FP_Fullbody_Clothing_Legs;

	if (FP_Fullbody_Clothing_Shoes != nullptr)
		*FP_Fullbody_Clothing_Shoes = Parms.FP_Fullbody_Clothing_Shoes;

	if (FP_Fullbody_Clothing_Gloves != nullptr)
		*FP_Fullbody_Clothing_Gloves = Parms.FP_Fullbody_Clothing_Gloves;

	if (FP_Fullbody_Clothing_Gear != nullptr)
		*FP_Fullbody_Clothing_Gear = Parms.FP_Fullbody_Clothing_Gear;

	if (FP_Body != nullptr)
		*FP_Body = Parms.FP_Body;

	if (FP_Arms != nullptr)
		*FP_Arms = Parms.FP_Arms;

	if (FP_Arms_Clothing_Torso != nullptr)
		*FP_Arms_Clothing_Torso = Parms.FP_Arms_Clothing_Torso;

	if (FP_Arms_Clothing_Gloves != nullptr)
		*FP_Arms_Clothing_Gloves = Parms.FP_Arms_Clothing_Gloves;

	if (FP_Arms_Clothing_Gear != nullptr)
		*FP_Arms_Clothing_Gear = Parms.FP_Arms_Clothing_Gear;

}

}


