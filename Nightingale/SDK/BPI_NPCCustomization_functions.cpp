#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_NPCCustomization.BPI_NPCCustomization_C
// (None)

class UClass* IBPI_NPCCustomization_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_NPCCustomization_C");

	return Clss;
}


// BPI_NPCCustomization_C BPI_NPCCustomization.Default__BPI_NPCCustomization_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_NPCCustomization_C* IBPI_NPCCustomization_C::GetDefaultObj()
{
	static class IBPI_NPCCustomization_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_NPCCustomization_C*>(IBPI_NPCCustomization_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_NPCCustomization.BPI_NPCCustomization_C.GetClothes_Back
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      BackComponent                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCCustomization_C::GetClothes_Back(class USkeletalMeshComponent** BackComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCCustomization_C", "GetClothes_Back");

	Params::IBPI_NPCCustomization_C_GetClothes_Back_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BackComponent != nullptr)
		*BackComponent = Parms.BackComponent;

}


// Function BPI_NPCCustomization.BPI_NPCCustomization_C.GetClothes_Jewelry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      JewelryComponent                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCCustomization_C::GetClothes_Jewelry(class USkeletalMeshComponent** JewelryComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCCustomization_C", "GetClothes_Jewelry");

	Params::IBPI_NPCCustomization_C_GetClothes_Jewelry_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (JewelryComponent != nullptr)
		*JewelryComponent = Parms.JewelryComponent;

}


// Function BPI_NPCCustomization.BPI_NPCCustomization_C.GetClothes_Glasses
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      GlassesComponent                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCCustomization_C::GetClothes_Glasses(class USkeletalMeshComponent** GlassesComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCCustomization_C", "GetClothes_Glasses");

	Params::IBPI_NPCCustomization_C_GetClothes_Glasses_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (GlassesComponent != nullptr)
		*GlassesComponent = Parms.GlassesComponent;

}


// Function BPI_NPCCustomization.BPI_NPCCustomization_C.GetBodyPart_Teeth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      TeethComponent                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCCustomization_C::GetBodyPart_Teeth(class USkeletalMeshComponent** TeethComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCCustomization_C", "GetBodyPart_Teeth");

	Params::IBPI_NPCCustomization_C_GetBodyPart_Teeth_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TeethComponent != nullptr)
		*TeethComponent = Parms.TeethComponent;

}


// Function BPI_NPCCustomization.BPI_NPCCustomization_C.GetBodyPart_Eyebrows
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      EyebrowsComponent                                                (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCCustomization_C::GetBodyPart_Eyebrows(class USkeletalMeshComponent** EyebrowsComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCCustomization_C", "GetBodyPart_Eyebrows");

	Params::IBPI_NPCCustomization_C_GetBodyPart_Eyebrows_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EyebrowsComponent != nullptr)
		*EyebrowsComponent = Parms.EyebrowsComponent;

}


// Function BPI_NPCCustomization.BPI_NPCCustomization_C.GetBodyPart_FacialHair
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      FacialHairComponent                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCCustomization_C::GetBodyPart_FacialHair(class USkeletalMeshComponent** FacialHairComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCCustomization_C", "GetBodyPart_FacialHair");

	Params::IBPI_NPCCustomization_C_GetBodyPart_FacialHair_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FacialHairComponent != nullptr)
		*FacialHairComponent = Parms.FacialHairComponent;

}


// Function BPI_NPCCustomization.BPI_NPCCustomization_C.GetCLothes_Gear
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      Gear                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCCustomization_C::GetCLothes_Gear(class USkeletalMeshComponent** Gear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCCustomization_C", "GetCLothes_Gear");

	Params::IBPI_NPCCustomization_C_GetCLothes_Gear_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Gear != nullptr)
		*Gear = Parms.Gear;

}


// Function BPI_NPCCustomization.BPI_NPCCustomization_C.GetBody
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      BodyComponent                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCCustomization_C::GetBody(class USkeletalMeshComponent** BodyComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCCustomization_C", "GetBody");

	Params::IBPI_NPCCustomization_C_GetBody_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BodyComponent != nullptr)
		*BodyComponent = Parms.BodyComponent;

}


// Function BPI_NPCCustomization.BPI_NPCCustomization_C.GetBodyPart_Eyes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      EyeComponent                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCCustomization_C::GetBodyPart_Eyes(class USkeletalMeshComponent** EyeComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCCustomization_C", "GetBodyPart_Eyes");

	Params::IBPI_NPCCustomization_C_GetBodyPart_Eyes_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EyeComponent != nullptr)
		*EyeComponent = Parms.EyeComponent;

}


// Function BPI_NPCCustomization.BPI_NPCCustomization_C.GetClothes_Gloves
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      GlovesComponent                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCCustomization_C::GetClothes_Gloves(class USkeletalMeshComponent** GlovesComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCCustomization_C", "GetClothes_Gloves");

	Params::IBPI_NPCCustomization_C_GetClothes_Gloves_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (GlovesComponent != nullptr)
		*GlovesComponent = Parms.GlovesComponent;

}


// Function BPI_NPCCustomization.BPI_NPCCustomization_C.GetClothes_Head
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      HatComponent                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCCustomization_C::GetClothes_Head(class USkeletalMeshComponent** HatComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCCustomization_C", "GetClothes_Head");

	Params::IBPI_NPCCustomization_C_GetClothes_Head_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HatComponent != nullptr)
		*HatComponent = Parms.HatComponent;

}


// Function BPI_NPCCustomization.BPI_NPCCustomization_C.GetBodyPart_Hair
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      HairComponent                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCCustomization_C::GetBodyPart_Hair(class USkeletalMeshComponent** HairComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCCustomization_C", "GetBodyPart_Hair");

	Params::IBPI_NPCCustomization_C_GetBodyPart_Hair_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HairComponent != nullptr)
		*HairComponent = Parms.HairComponent;

}


// Function BPI_NPCCustomization.BPI_NPCCustomization_C.GetClothes_Boots
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      ShoesComponent                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCCustomization_C::GetClothes_Boots(class USkeletalMeshComponent** ShoesComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCCustomization_C", "GetClothes_Boots");

	Params::IBPI_NPCCustomization_C_GetClothes_Boots_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShoesComponent != nullptr)
		*ShoesComponent = Parms.ShoesComponent;

}


// Function BPI_NPCCustomization.BPI_NPCCustomization_C.GetClothes_Bottom
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      PantsComponent                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCCustomization_C::GetClothes_Bottom(class USkeletalMeshComponent** PantsComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCCustomization_C", "GetClothes_Bottom");

	Params::IBPI_NPCCustomization_C_GetClothes_Bottom_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PantsComponent != nullptr)
		*PantsComponent = Parms.PantsComponent;

}


// Function BPI_NPCCustomization.BPI_NPCCustomization_C.GetClothes_Torso
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      TorsoComponent                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCCustomization_C::GetClothes_Torso(class USkeletalMeshComponent** TorsoComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCCustomization_C", "GetClothes_Torso");

	Params::IBPI_NPCCustomization_C_GetClothes_Torso_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TorsoComponent != nullptr)
		*TorsoComponent = Parms.TorsoComponent;

}

}


