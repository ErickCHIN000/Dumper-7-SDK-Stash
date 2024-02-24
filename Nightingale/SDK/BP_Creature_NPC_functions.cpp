#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Creature_NPC.BP_Creature_NPC_C
// (Actor, Pawn)

class UClass* ABP_Creature_NPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Creature_NPC_C");

	return Clss;
}


// BP_Creature_NPC_C BP_Creature_NPC.Default__BP_Creature_NPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Creature_NPC_C* ABP_Creature_NPC_C::GetDefaultObj()
{
	static class ABP_Creature_NPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Creature_NPC_C*>(ABP_Creature_NPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Creature_NPC.BP_Creature_NPC_C.SetAmbientDialogue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogue*                   AmbientDialogue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::SetAmbientDialogue(class UDialogue* AmbientDialogue, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "SetAmbientDialogue");

	Params::ABP_Creature_NPC_C_SetAmbientDialogue_Params Parms{};

	Parms.AmbientDialogue = AmbientDialogue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.SetDialogue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogue*                   Dialogue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::SetDialogue(class UDialogue* Dialogue, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "SetDialogue");

	Params::ABP_Creature_NPC_C_SetDialogue_Params Parms{};

	Parms.Dialogue = Dialogue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.SetNPCCamera
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::SetNPCCamera(class AController* Controller, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "SetNPCCamera");

	Params::ABP_Creature_NPC_C_SetNPCCamera_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.RemoveMenus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::RemoveMenus(bool* bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "RemoveMenus");

	Params::ABP_Creature_NPC_C_RemoveMenus_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.CreateDialogueEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerController_C*      PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::CreateDialogueEvent(class ABP_PlayerController_C* PlayerController, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "CreateDialogueEvent");

	Params::ABP_Creature_NPC_C_CreateDialogueEvent_Params Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.RestorePlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveMenus_bSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::RestorePlayer(bool* bSuccess, bool CallFunc_RemoveMenus_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "RestorePlayer");

	Params::ABP_Creature_NPC_C_RestorePlayer_Params Parms{};

	Parms.CallFunc_RemoveMenus_bSuccess = CallFunc_RemoveMenus_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.ShowMerchant
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::ShowMerchant(bool* bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "ShowMerchant");

	Params::ABP_Creature_NPC_C_ShowMerchant_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.GetAssociatedEncounter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEncounterBase*              Associated_Encounter                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::GetAssociatedEncounter(class AEncounterBase** Associated_Encounter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "GetAssociatedEncounter");

	Params::ABP_Creature_NPC_C_GetAssociatedEncounter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Associated_Encounter != nullptr)
		*Associated_Encounter = Parms.Associated_Encounter;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.SetAssociatedEncounter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEncounterBase*              Associated_Encounter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::SetAssociatedEncounter(class AEncounterBase* Associated_Encounter, bool* Success, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "SetAssociatedEncounter");

	Params::ABP_Creature_NPC_C_SetAssociatedEncounter_Params Parms{};

	Parms.Associated_Encounter = Associated_Encounter;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.GetNPCInfoForUIInterface
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_NPCInfoForUI_C>Interface                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::GetNPCInfoForUIInterface(TScriptInterface<class IBPI_NPCInfoForUI_C>* Interface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "GetNPCInfoForUIInterface");

	Params::ABP_Creature_NPC_C_GetNPCInfoForUIInterface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Interface != nullptr)
		*Interface = Parms.Interface;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.GetNPCFriendshipInterface
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_NPCFriendship_C>Interface                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::GetNPCFriendshipInterface(TScriptInterface<class IBPI_NPCFriendship_C>* Interface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "GetNPCFriendshipInterface");

	Params::ABP_Creature_NPC_C_GetNPCFriendshipInterface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Interface != nullptr)
		*Interface = Parms.Interface;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.GetNPCContractInterface
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_NPCContract_C>Interface                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::GetNPCContractInterface(TScriptInterface<class IBPI_NPCContract_C>* Interface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "GetNPCContractInterface");

	Params::ABP_Creature_NPC_C_GetNPCContractInterface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Interface != nullptr)
		*Interface = Parms.Interface;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.GetNPCDialogueInterface
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_NPCDialogue_C>Interface                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::GetNPCDialogueInterface(TScriptInterface<class IBPI_NPCDialogue_C>* Interface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "GetNPCDialogueInterface");

	Params::ABP_Creature_NPC_C_GetNPCDialogueInterface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Interface != nullptr)
		*Interface = Parms.Interface;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.GetClothes_Back
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      BackComponent                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::GetClothes_Back(class USkeletalMeshComponent** BackComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "GetClothes_Back");

	Params::ABP_Creature_NPC_C_GetClothes_Back_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BackComponent != nullptr)
		*BackComponent = Parms.BackComponent;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.GetClothes_Jewelry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      JewelryComponent                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::GetClothes_Jewelry(class USkeletalMeshComponent** JewelryComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "GetClothes_Jewelry");

	Params::ABP_Creature_NPC_C_GetClothes_Jewelry_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (JewelryComponent != nullptr)
		*JewelryComponent = Parms.JewelryComponent;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.GetClothes_Glasses
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      GlassesComponent                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::GetClothes_Glasses(class USkeletalMeshComponent** GlassesComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "GetClothes_Glasses");

	Params::ABP_Creature_NPC_C_GetClothes_Glasses_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (GlassesComponent != nullptr)
		*GlassesComponent = Parms.GlassesComponent;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.GetBodyPart_Teeth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      TeethComponent                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::GetBodyPart_Teeth(class USkeletalMeshComponent** TeethComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "GetBodyPart_Teeth");

	Params::ABP_Creature_NPC_C_GetBodyPart_Teeth_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TeethComponent != nullptr)
		*TeethComponent = Parms.TeethComponent;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.GetBodyPart_Eyebrows
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      EyebrowsComponent                                                (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::GetBodyPart_Eyebrows(class USkeletalMeshComponent** EyebrowsComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "GetBodyPart_Eyebrows");

	Params::ABP_Creature_NPC_C_GetBodyPart_Eyebrows_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EyebrowsComponent != nullptr)
		*EyebrowsComponent = Parms.EyebrowsComponent;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.GetBodyPart_FacialHair
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      FacialHairComponent                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::GetBodyPart_FacialHair(class USkeletalMeshComponent** FacialHairComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "GetBodyPart_FacialHair");

	Params::ABP_Creature_NPC_C_GetBodyPart_FacialHair_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FacialHairComponent != nullptr)
		*FacialHairComponent = Parms.FacialHairComponent;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.GetCLothes_Gear
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      Gear                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::GetCLothes_Gear(class USkeletalMeshComponent** Gear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "GetCLothes_Gear");

	Params::ABP_Creature_NPC_C_GetCLothes_Gear_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Gear != nullptr)
		*Gear = Parms.Gear;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.GetClothes_Torso
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      TorsoComponent                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::GetClothes_Torso(class USkeletalMeshComponent** TorsoComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "GetClothes_Torso");

	Params::ABP_Creature_NPC_C_GetClothes_Torso_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TorsoComponent != nullptr)
		*TorsoComponent = Parms.TorsoComponent;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.GetClothes_Bottom
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      PantsComponent                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::GetClothes_Bottom(class USkeletalMeshComponent** PantsComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "GetClothes_Bottom");

	Params::ABP_Creature_NPC_C_GetClothes_Bottom_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PantsComponent != nullptr)
		*PantsComponent = Parms.PantsComponent;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.GetClothes_Boots
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      ShoesComponent                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::GetClothes_Boots(class USkeletalMeshComponent** ShoesComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "GetClothes_Boots");

	Params::ABP_Creature_NPC_C_GetClothes_Boots_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShoesComponent != nullptr)
		*ShoesComponent = Parms.ShoesComponent;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.GetBodyPart_Hair
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      HairComponent                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::GetBodyPart_Hair(class USkeletalMeshComponent** HairComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "GetBodyPart_Hair");

	Params::ABP_Creature_NPC_C_GetBodyPart_Hair_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HairComponent != nullptr)
		*HairComponent = Parms.HairComponent;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.GetClothes_Head
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      HatComponent                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::GetClothes_Head(class USkeletalMeshComponent** HatComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "GetClothes_Head");

	Params::ABP_Creature_NPC_C_GetClothes_Head_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HatComponent != nullptr)
		*HatComponent = Parms.HatComponent;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.GetClothes_Gloves
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      GlovesComponent                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::GetClothes_Gloves(class USkeletalMeshComponent** GlovesComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "GetClothes_Gloves");

	Params::ABP_Creature_NPC_C_GetClothes_Gloves_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (GlovesComponent != nullptr)
		*GlovesComponent = Parms.GlovesComponent;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.GetBodyPart_Eyes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      EyeComponent                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::GetBodyPart_Eyes(class USkeletalMeshComponent** EyeComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "GetBodyPart_Eyes");

	Params::ABP_Creature_NPC_C_GetBodyPart_Eyes_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EyeComponent != nullptr)
		*EyeComponent = Parms.EyeComponent;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.GetBody
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      BodyComponent                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::GetBody(class USkeletalMeshComponent** BodyComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "GetBody");

	Params::ABP_Creature_NPC_C_GetBody_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BodyComponent != nullptr)
		*BodyComponent = Parms.BodyComponent;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.OnRep_CurrentEncounterMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::OnRep_CurrentEncounterMenu(int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "OnRep_CurrentEncounterMenu");

	Params::ABP_Creature_NPC_C_OnRep_CurrentEncounterMenu_Params Parms{};

	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.SetupHomeLocation
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXAISpawner*               CallFunc_GetSpawner_Spawner                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   K2Node_DynamicCast_AsBP_Creature_Spawner_Base                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Get_POILocation_DenLocation                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::SetupHomeLocation(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ANWXAISpawner* CallFunc_GetSpawner_Spawner, class ABP_CreatureSpawnerBase_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Get_POILocation_DenLocation, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "SetupHomeLocation");

	Params::ABP_Creature_NPC_C_SetupHomeLocation_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetSpawner_Spawner = CallFunc_GetSpawner_Spawner;
	Parms.K2Node_DynamicCast_AsBP_Creature_Spawner_Base = K2Node_DynamicCast_AsBP_Creature_Spawner_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Get_POILocation_DenLocation = CallFunc_Get_POILocation_DenLocation;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.SetupMusicState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalMusicManager*         CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::SetupMusicState(bool CallFunc_IsDedicatedServer_ReturnValue, class UGlobalMusicManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "SetupMusicState");

	Params::ABP_Creature_NPC_C_SetupMusicState_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.SetupNPCDialogue
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::SetupNPCDialogue(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "SetupNPCDialogue");

	Params::ABP_Creature_NPC_C_SetupNPCDialogue_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.SetupFactionText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                CurrentTag                                                       (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// TMap<struct FGameplayTag, class FText>FactionTagToFactionNameMap                                       (Edit, BlueprintVisible)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<struct FGameplayTag, class FText>K2Node_MakeVariable_MakeVariableOutput                           (None)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::SetupFactionText(const struct FGameplayTag& CurrentTag, TMap<struct FGameplayTag, class FText> FactionTagToFactionNameMap, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, TMap<struct FGameplayTag, class FText> K2Node_MakeVariable_MakeVariableOutput, bool CallFunc_ActorHasTag_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FGameplayTag>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "SetupFactionText");

	Params::ABP_Creature_NPC_C_SetupFactionText_Params Parms{};

	Parms.CurrentTag = CurrentTag;
	Parms.FactionTagToFactionNameMap = FactionTagToFactionNameMap;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.SetOrResetNPCName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStringTableEntryHandle     NameHandle                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EGetResult              CallFunc_IsValidStringTableHandle_Result                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStringTableEntryHandle     CallFunc_GenerateNewNPCName_NewNPCName                           (None)

void ABP_Creature_NPC_C::SetOrResetNPCName(const struct FStringTableEntryHandle& NameHandle, enum class EGetResult CallFunc_IsValidStringTableHandle_Result, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_HasAuthority_ReturnValue, const struct FStringTableEntryHandle& CallFunc_GenerateNewNPCName_NewNPCName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "SetOrResetNPCName");

	Params::ABP_Creature_NPC_C_SetOrResetNPCName_Params Parms{};

	Parms.NameHandle = NameHandle;
	Parms.CallFunc_IsValidStringTableHandle_Result = CallFunc_IsValidStringTableHandle_Result;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GenerateNewNPCName_NewNPCName = CallFunc_GenerateNewNPCName_NewNPCName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.GetNPCNameHandle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FStringTableEntryHandle     OutNameHandle                                                    (Parm, OutParm)

void ABP_Creature_NPC_C::GetNPCNameHandle(struct FStringTableEntryHandle* OutNameHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "GetNPCNameHandle");

	Params::ABP_Creature_NPC_C_GetNPCNameHandle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutNameHandle != nullptr)
		*OutNameHandle = std::move(Parms.OutNameHandle);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.GenerateNewNPCName
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FStringTableEntryHandle     NewNPCName                                                       (Parm, OutParm)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBodyType               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBodyType               Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBodyType               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStringTableEntryHandle     CallFunc_Get_Rand_NPC_Name_NameHandle                            (None)

void ABP_Creature_NPC_C::GenerateNewNPCName(struct FStringTableEntryHandle* NewNPCName, int32 Temp_int_Variable, enum class EBodyType Temp_byte_Variable, enum class EBodyType Temp_byte_Variable_1, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, enum class EBodyType K2Node_Select_Default, const struct FStringTableEntryHandle& CallFunc_Get_Rand_NPC_Name_NameHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "GenerateNewNPCName");

	Params::ABP_Creature_NPC_C_GenerateNewNPCName_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Get_Rand_NPC_Name_NameHandle = CallFunc_Get_Rand_NPC_Name_NameHandle;

	UObject::ProcessEvent(Func, &Parms);

	if (NewNPCName != nullptr)
		*NewNPCName = std::move(Parms.NewNPCName);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.GetNPCNameText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        NPCName                                                          (Parm, OutParm)
// class FText                        CallFunc_TextFromStringTable_ReturnValue                         (None)

void ABP_Creature_NPC_C::GetNPCNameText(class FText* NPCName, class FText CallFunc_TextFromStringTable_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "GetNPCNameText");

	Params::ABP_Creature_NPC_C_GetNPCNameText_Params Parms{};

	Parms.CallFunc_TextFromStringTable_ReturnValue = CallFunc_TextFromStringTable_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NPCName != nullptr)
		*NPCName = Parms.NPCName;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.OnRep_NPC Indicator Sign
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Creature_NPC_C::OnRep_NPC_Indicator_Sign()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "OnRep_NPC Indicator Sign");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.Load NPC Data
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         NPC_Data                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FNWXNPCData                 CallFunc_GetNPCDataFromDataTableRow_OutNPCData                   (None)
// enum class ENPCBlueprintHelperGetResultCallFunc_GetNPCDataFromDataTableRow_Branches                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetNPCDataFromDataTableRow_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::Load_NPC_Data(const struct FDataTableRowHandle& NPC_Data, const struct FNWXNPCData& CallFunc_GetNPCDataFromDataTableRow_OutNPCData, enum class ENPCBlueprintHelperGetResult CallFunc_GetNPCDataFromDataTableRow_Branches, bool CallFunc_GetNPCDataFromDataTableRow_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Array_IsNotEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_GetDisplayName_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "Load NPC Data");

	Params::ABP_Creature_NPC_C_Load_NPC_Data_Params Parms{};

	Parms.NPC_Data = NPC_Data;
	Parms.CallFunc_GetNPCDataFromDataTableRow_OutNPCData = CallFunc_GetNPCDataFromDataTableRow_OutNPCData;
	Parms.CallFunc_GetNPCDataFromDataTableRow_Branches = CallFunc_GetNPCDataFromDataTableRow_Branches;
	Parms.CallFunc_GetNPCDataFromDataTableRow_ReturnValue = CallFunc_GetNPCDataFromDataTableRow_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.GetCarriedResource
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEquippableItem*             ResourceItem                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsCarryingResource                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetItem_Weapon                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_EquippableItemBase_C*    K2Node_DynamicCast_AsBP_Equippable_Item_Base                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          CallFunc_GetItemID_OutItemReference                              (HasGetValueTypeHash)
// bool                               CallFunc_IsItemResource_Return_Value                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::GetCarriedResource(class AEquippableItem** ResourceItem, bool* IsCarryingResource, class AEquippableItem* CallFunc_GetItem_Weapon, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, bool CallFunc_IsItemResource_Return_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "GetCarriedResource");

	Params::ABP_Creature_NPC_C_GetCarriedResource_Params Parms{};

	Parms.CallFunc_GetItem_Weapon = CallFunc_GetItem_Weapon;
	Parms.K2Node_DynamicCast_AsBP_Equippable_Item_Base = K2Node_DynamicCast_AsBP_Equippable_Item_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemID_OutItemReference = CallFunc_GetItemID_OutItemReference;
	Parms.CallFunc_IsItemResource_Return_Value = CallFunc_IsItemResource_Return_Value;

	UObject::ProcessEvent(Func, &Parms);

	if (ResourceItem != nullptr)
		*ResourceItem = Parms.ResourceItem;

	if (IsCarryingResource != nullptr)
		*IsCarryingResource = Parms.IsCarryingResource;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.SetupEmployeeScreen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAutomatedTestsRunning_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFeatureFlagStatus      CallFunc_FeatureFlagBranch_Result                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_NPCMenu_Content          CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::SetupEmployeeScreen(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_AreAutomatedTestsRunning_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EFeatureFlagStatus CallFunc_FeatureFlagBranch_Result, bool K2Node_SwitchEnum_CmpSuccess, const struct FS_NPCMenu_Content& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "SetupEmployeeScreen");

	Params::ABP_Creature_NPC_C_SetupEmployeeScreen_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_AreAutomatedTestsRunning_ReturnValue = CallFunc_AreAutomatedTestsRunning_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_FeatureFlagBranch_Result = CallFunc_FeatureFlagBranch_Result;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.UpdateAmbientDialogue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::UpdateAmbientDialogue(bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "UpdateAmbientDialogue");

	Params::ABP_Creature_NPC_C_UpdateAmbientDialogue_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue_1 = CallFunc_K2_IsTimerActiveHandle_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.OnRep_Ambient Dialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Creature_NPC_C::OnRep_Ambient_Dialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "OnRep_Ambient Dialogue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.OnRep_Dialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Creature_NPC_C::OnRep_Dialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "OnRep_Dialogue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.OnRep_PlayerEmployee
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Creature_NPC_C::OnRep_PlayerEmployee()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "OnRep_PlayerEmployee");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.Start Ambient Dialogue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             LCharacter                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDialogue*                   CallFunc_GetAmbientDialogue_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AmbientDialogue_C*       CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::Start_Ambient_Dialogue(class ABP_Character_C* LCharacter, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UDialogue* CallFunc_GetAmbientDialogue_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class ABP_AmbientDialogue_C* CallFunc_FinishSpawningActor_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "Start Ambient Dialogue");

	Params::ABP_Creature_NPC_C_Start_Ambient_Dialogue_Params Parms{};

	Parms.LCharacter = LCharacter;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_1 = CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Character = K2Node_DynamicCast_AsBP_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_GetAmbientDialogue_ReturnValue = CallFunc_GetAmbientDialogue_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.InteractionRequiresClientOnly
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               RequiresClientAction                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::InteractionRequiresClientOnly(class AController* Controller, bool* RequiresClientAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "InteractionRequiresClientOnly");

	Params::ABP_Creature_NPC_C_InteractionRequiresClientOnly_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

	if (RequiresClientAction != nullptr)
		*RequiresClientAction = Parms.RequiresClientAction;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.Has NPCDialog or Menus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               HasDialog                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::Has_NPCDialog_or_Menus(bool* HasDialog, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "Has NPCDialog or Menus");

	Params::ABP_Creature_NPC_C_Has_NPCDialog_or_Menus_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasDialog != nullptr)
		*HasDialog = Parms.HasDialog;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.ClientDeathLogic
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Creature_NPC_C::ClientDeathLogic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "ClientDeathLogic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.ServerDeathLogic
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Creature_NPC_C::ServerDeathLogic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "ServerDeathLogic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.GetInteractText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class FString                      InteractText                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetNPCNameText_NPCName                                  (None)
// bool                               CallFunc_CanInteractWithActor_InteractAvailable                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        K2Node_Select_Default                                            (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::GetInteractText(const struct FInteractionData& InteractionData, class FString* InteractText, bool Temp_bool_Variable, class FText Temp_text_Variable, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable_1, class FText CallFunc_GetNPCNameText_NPCName, bool CallFunc_CanInteractWithActor_InteractAvailable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText CallFunc_Format_ReturnValue_1, class FText K2Node_Select_Default, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText K2Node_Select_Default_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "GetInteractText");

	Params::ABP_Creature_NPC_C_GetInteractText_Params Parms{};

	Parms.InteractionData = InteractionData;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetNPCNameText_NPCName = CallFunc_GetNPCNameText_NPCName;
	Parms.CallFunc_CanInteractWithActor_InteractAvailable = CallFunc_CanInteractWithActor_InteractAvailable;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractText != nullptr)
		*InteractText = std::move(Parms.InteractText);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.GetDamageEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      DamageEffect                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::GetDamageEffect(class UClass** DamageEffect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "GetDamageEffect");

	Params::ABP_Creature_NPC_C_GetDamageEffect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DamageEffect != nullptr)
		*DamageEffect = Parms.DamageEffect;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.NPC_OnDamageReceived
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       EffectTags                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTagValueContainer          TagValueContainer                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTag                CallFunc_PlayerControlledTag_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WillDamage_WillDamage                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStateActive_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerAccountInfo_C>K2Node_DynamicCast_AsBPI_Player_Account_Info                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPersistentUniqueIdFromPawn_PersistentId              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_NPCFriendship_C>CallFunc_FriendshipEvent_self_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FriendshipEvent_Success                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FriendshipEvent_ScoreAwarded                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::NPC_OnDamageReceived(double Damage, class AActor* Target, class AActor* Source, const struct FGameplayTagContainer& EffectTags, const struct FHitResult& HitResult, const struct FTagValueContainer& TagValueContainer, const struct FGameplayTag& CallFunc_PlayerControlledTag_ReturnValue, bool CallFunc_WillDamage_WillDamage, bool CallFunc_IsStateActive_ReturnValue, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_NPCFriendship_C> CallFunc_FriendshipEvent_self_CastInput, bool CallFunc_FriendshipEvent_Success, int32 CallFunc_FriendshipEvent_ScoreAwarded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "NPC_OnDamageReceived");

	Params::ABP_Creature_NPC_C_NPC_OnDamageReceived_Params Parms{};

	Parms.Damage = Damage;
	Parms.Target = Target;
	Parms.Source = Source;
	Parms.EffectTags = EffectTags;
	Parms.HitResult = HitResult;
	Parms.TagValueContainer = TagValueContainer;
	Parms.CallFunc_PlayerControlledTag_ReturnValue = CallFunc_PlayerControlledTag_ReturnValue;
	Parms.CallFunc_WillDamage_WillDamage = CallFunc_WillDamage_WillDamage;
	Parms.CallFunc_IsStateActive_ReturnValue = CallFunc_IsStateActive_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Player_Account_Info = K2Node_DynamicCast_AsBPI_Player_Account_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPersistentUniqueIdFromPawn_PersistentId = CallFunc_GetPersistentUniqueIdFromPawn_PersistentId;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FriendshipEvent_self_CastInput = CallFunc_FriendshipEvent_self_CastInput;
	Parms.CallFunc_FriendshipEvent_Success = CallFunc_FriendshipEvent_Success;
	Parms.CallFunc_FriendshipEvent_ScoreAwarded = CallFunc_FriendshipEvent_ScoreAwarded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.AddUICreatureComponent
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CreatureComponent_UI_C*  UICreatureComponent                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CreatureComponent_UI_NPC_C*CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::AddUICreatureComponent(class UBP_CreatureComponent_UI_C** UICreatureComponent, bool CallFunc_IsValid_ReturnValue, const struct FTransform& Temp_struct_Variable, class UBP_CreatureComponent_UI_NPC_C* CallFunc_AddComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "AddUICreatureComponent");

	Params::ABP_Creature_NPC_C_AddUICreatureComponent_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (UICreatureComponent != nullptr)
		*UICreatureComponent = Parms.UICreatureComponent;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.ReturnMeshToHighlight
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// TArray<class UStaticMeshComponent*>StaticMesh_to_Highlight                                          (Parm, OutParm, ContainsInstancedReference)
// TArray<class USkeletalMeshComponent*>SkeletalMesh_to_Highlight                                        (Parm, OutParm, ContainsInstancedReference)
// bool                               Hostile_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            Quality                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USkeletalMeshComponent*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// TArray<class UStaticMeshComponent*>K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_CanInteractWithActor_InteractAvailable                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UStaticMeshComponent*>CallFunc_ReturnMeshToHighlight_StaticMesh_to_Highlight           (ReferenceParm, ContainsInstancedReference)
// TArray<class USkeletalMeshComponent*>CallFunc_ReturnMeshToHighlight_SkeletalMesh_to_Highlight         (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_ReturnMeshToHighlight_Hostile_                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            CallFunc_ReturnMeshToHighlight_Quality                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::ReturnMeshToHighlight(const struct FInteractionData& InteractionData, TArray<class UStaticMeshComponent*>* StaticMesh_to_Highlight, TArray<class USkeletalMeshComponent*>* SkeletalMesh_to_Highlight, bool* Hostile_, enum class EItemQuality* Quality, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array, TArray<class UStaticMeshComponent*>& K2Node_MakeArray_Array_1, bool CallFunc_CanInteractWithActor_InteractAvailable, TArray<class UStaticMeshComponent*>& CallFunc_ReturnMeshToHighlight_StaticMesh_to_Highlight, TArray<class USkeletalMeshComponent*>& CallFunc_ReturnMeshToHighlight_SkeletalMesh_to_Highlight, bool CallFunc_ReturnMeshToHighlight_Hostile_, enum class EItemQuality CallFunc_ReturnMeshToHighlight_Quality)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "ReturnMeshToHighlight");

	Params::ABP_Creature_NPC_C_ReturnMeshToHighlight_Params Parms{};

	Parms.InteractionData = InteractionData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_CanInteractWithActor_InteractAvailable = CallFunc_CanInteractWithActor_InteractAvailable;
	Parms.CallFunc_ReturnMeshToHighlight_StaticMesh_to_Highlight = CallFunc_ReturnMeshToHighlight_StaticMesh_to_Highlight;
	Parms.CallFunc_ReturnMeshToHighlight_SkeletalMesh_to_Highlight = CallFunc_ReturnMeshToHighlight_SkeletalMesh_to_Highlight;
	Parms.CallFunc_ReturnMeshToHighlight_Hostile_ = CallFunc_ReturnMeshToHighlight_Hostile_;
	Parms.CallFunc_ReturnMeshToHighlight_Quality = CallFunc_ReturnMeshToHighlight_Quality;

	UObject::ProcessEvent(Func, &Parms);

	if (StaticMesh_to_Highlight != nullptr)
		*StaticMesh_to_Highlight = std::move(Parms.StaticMesh_to_Highlight);

	if (SkeletalMesh_to_Highlight != nullptr)
		*SkeletalMesh_to_Highlight = std::move(Parms.SkeletalMesh_to_Highlight);

	if (Hostile_ != nullptr)
		*Hostile_ = Parms.Hostile_;

	if (Quality != nullptr)
		*Quality = Parms.Quality;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.CanInteractWithActor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               InteractAvailable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         LEmployeeManagement                                              (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFeatureFlagStatus      CallFunc_FeatureFlagBranch_Result                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::CanInteractWithActor(class AController* Controller, const struct FInteractionData& InteractionData, bool* InteractAvailable, const struct FDataTableRowHandle& LEmployeeManagement, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, enum class EFeatureFlagStatus CallFunc_FeatureFlagBranch_Result, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "CanInteractWithActor");

	Params::ABP_Creature_NPC_C_CanInteractWithActor_Params Parms{};

	Parms.Controller = Controller;
	Parms.InteractionData = InteractionData;
	Parms.LEmployeeManagement = LEmployeeManagement;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_FeatureFlagBranch_Result = CallFunc_FeatureFlagBranch_Result;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractAvailable != nullptr)
		*InteractAvailable = Parms.InteractAvailable;

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::UserConstructionScript(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "UserConstructionScript");

	Params::ABP_Creature_NPC_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.CrossServerSetAssociatedEncounter
// (Net, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEncounterBase*              Associated_Encounter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::CrossServerSetAssociatedEncounter(class AEncounterBase* Associated_Encounter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "CrossServerSetAssociatedEncounter");

	Params::ABP_Creature_NPC_C_CrossServerSetAssociatedEncounter_Params Parms{};

	Parms.Associated_Encounter = Associated_Encounter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.CrossServerSetDialogue
// (Net, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogue*                   Dialogue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::CrossServerSetDialogue(class UDialogue* Dialogue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "CrossServerSetDialogue");

	Params::ABP_Creature_NPC_C_CrossServerSetDialogue_Params Parms{};

	Parms.Dialogue = Dialogue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.CrossServerSetAmbientDialogue
// (Net, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogue*                   AmbientDialogue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::CrossServerSetAmbientDialogue(class UDialogue* AmbientDialogue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "CrossServerSetAmbientDialogue");

	Params::ABP_Creature_NPC_C_CrossServerSetAmbientDialogue_Params Parms{};

	Parms.AmbientDialogue = AmbientDialogue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.ClientUI_PlayerInitiateEncounter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Creature_NPC_C::ClientUI_PlayerInitiateEncounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "ClientUI_PlayerInitiateEncounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Creature_NPC_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.OnDamageReceived
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       EffectTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FHitResult                  HitResult                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTagValueContainer          TagValueContainer                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_Creature_NPC_C::OnDamageReceived(float Damage, class AActor* Target, class AActor* Source, struct FGameplayTagContainer& EffectTags, struct FHitResult& HitResult, struct FTagValueContainer& TagValueContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "OnDamageReceived");

	Params::ABP_Creature_NPC_C_OnDamageReceived_Params Parms{};

	Parms.Damage = Damage;
	Parms.Target = Target;
	Parms.Source = Source;
	Parms.EffectTags = EffectTags;
	Parms.HitResult = HitResult;
	Parms.TagValueContainer = TagValueContainer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.PerformClientSideInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::PerformClientSideInteraction(class AController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "PerformClientSideInteraction");

	Params::ABP_Creature_NPC_C_PerformClientSideInteraction_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.CrossServerSetPlayerEmployee
// (Net, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlayerEmployee                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::CrossServerSetPlayerEmployee(bool PlayerEmployee)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "CrossServerSetPlayerEmployee");

	Params::ABP_Creature_NPC_C_CrossServerSetPlayerEmployee_Params Parms{};

	Parms.PlayerEmployee = PlayerEmployee;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.DE_Change_mood
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_NPC_Moods             Mood                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::DE_Change_mood(enum class E_NPC_Moods Mood)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "DE_Change_mood");

	Params::ABP_Creature_NPC_C_DE_Change_mood_Params Parms{};

	Parms.Mood = Mood;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "ReceiveEndPlay");

	Params::ABP_Creature_NPC_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.ResetNPCMenus
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Creature_NPC_C::ResetNPCMenus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "ResetNPCMenus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.Add NPCMenu
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         MenuRowHandle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::Add_NPCMenu(const struct FDataTableRowHandle& MenuRowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "Add NPCMenu");

	Params::ABP_Creature_NPC_C_Add_NPCMenu_Params Parms{};

	Parms.MenuRowHandle = MenuRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.ClearNPCMenu
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Creature_NPC_C::ClearNPCMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "ClearNPCMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.Setup NPC Indicator Sign
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Display_Sign                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Contract_StateType    Encounter_NPC_Status                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::Setup_NPC_Indicator_Sign(bool Display_Sign, enum class E_Contract_StateType Encounter_NPC_Status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "Setup NPC Indicator Sign");

	Params::ABP_Creature_NPC_C_Setup_NPC_Indicator_Sign_Params Parms{};

	Parms.Display_Sign = Display_Sign;
	Parms.Encounter_NPC_Status = Encounter_NPC_Status;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.ExecuteUbergraph_BP_Creature_NPC
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDialogue*                   K2Node_CustomEvent_AmbientDialogue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDialogue*                   K2Node_CustomEvent_Dialogue                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Target                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Source                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_EffectTags                                          (ConstParm)
// struct FHitResult                  K2Node_Event_HitResult                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTagValueContainer          K2Node_Event_TagValueContainer                                   (ConstParm)
// bool                               CallFunc_Has_NPCDialog_or_Menus_HasDialog                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEncounterBase*              K2Node_CustomEvent_Associated_Encounter                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_Controller                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_PlayerEmployee                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_UIMenusComponent_C*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanInteractWithActor_InteractAvailable                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_NPC_Moods             K2Node_CustomEvent_Mood                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_Map_Find_Value                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveActiveGameplayEffect_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_CustomEvent_MenuRowHandle                                 (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Display_Sign                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Contract_StateType    K2Node_CustomEvent_Encounter_NPC_Status                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetEncounterID_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_QuestGiverComponent_C*   CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_1                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_OnDamageReceived_Damage_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_C::ExecuteUbergraph_BP_Creature_NPC(int32 EntryPoint, class UDialogue* K2Node_CustomEvent_AmbientDialogue, class UDialogue* K2Node_CustomEvent_Dialogue, float K2Node_Event_Damage, class AActor* K2Node_Event_Target, class AActor* K2Node_Event_Source, const struct FGameplayTagContainer& K2Node_Event_EffectTags, const struct FHitResult& K2Node_Event_HitResult, const struct FTagValueContainer& K2Node_Event_TagValueContainer, bool CallFunc_Has_NPCDialog_or_Menus_HasDialog, class AEncounterBase* K2Node_CustomEvent_Associated_Encounter, class AController* K2Node_Event_Controller, bool K2Node_CustomEvent_PlayerEmployee, bool CallFunc_IsValid_ReturnValue, class UBP_UIMenusComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_CanInteractWithActor_InteractAvailable, enum class E_NPC_Moods K2Node_CustomEvent_Mood, int32 Temp_int_Array_Index_Variable, enum class EEndPlayReason K2Node_Event_EndPlayReason, TArray<class AActor*>& CallFunc_Map_Keys_Keys, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, const struct FDataTableRowHandle& K2Node_CustomEvent_MenuRowHandle, int32 CallFunc_Array_Add_ReturnValue, bool K2Node_CustomEvent_Display_Sign, enum class E_Contract_StateType K2Node_CustomEvent_Encounter_NPC_Status, const struct FGuid& CallFunc_GetEncounterID_ReturnValue, class UBP_QuestGiverComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_3, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, double CallFunc_NPC_OnDamageReceived_Damage_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "ExecuteUbergraph_BP_Creature_NPC");

	Params::ABP_Creature_NPC_C_ExecuteUbergraph_BP_Creature_NPC_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_AmbientDialogue = K2Node_CustomEvent_AmbientDialogue;
	Parms.K2Node_CustomEvent_Dialogue = K2Node_CustomEvent_Dialogue;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_Target = K2Node_Event_Target;
	Parms.K2Node_Event_Source = K2Node_Event_Source;
	Parms.K2Node_Event_EffectTags = K2Node_Event_EffectTags;
	Parms.K2Node_Event_HitResult = K2Node_Event_HitResult;
	Parms.K2Node_Event_TagValueContainer = K2Node_Event_TagValueContainer;
	Parms.CallFunc_Has_NPCDialog_or_Menus_HasDialog = CallFunc_Has_NPCDialog_or_Menus_HasDialog;
	Parms.K2Node_CustomEvent_Associated_Encounter = K2Node_CustomEvent_Associated_Encounter;
	Parms.K2Node_Event_Controller = K2Node_Event_Controller;
	Parms.K2Node_CustomEvent_PlayerEmployee = K2Node_CustomEvent_PlayerEmployee;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_CanInteractWithActor_InteractAvailable = CallFunc_CanInteractWithActor_InteractAvailable;
	Parms.K2Node_CustomEvent_Mood = K2Node_CustomEvent_Mood;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_RemoveActiveGameplayEffect_ReturnValue = CallFunc_RemoveActiveGameplayEffect_ReturnValue;
	Parms.K2Node_CustomEvent_MenuRowHandle = K2Node_CustomEvent_MenuRowHandle;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_CustomEvent_Display_Sign = K2Node_CustomEvent_Display_Sign;
	Parms.K2Node_CustomEvent_Encounter_NPC_Status = K2Node_CustomEvent_Encounter_NPC_Status;
	Parms.CallFunc_GetEncounterID_ReturnValue = CallFunc_GetEncounterID_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_3 = CallFunc_HasAuthority_ReturnValue_3;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_1 = CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.CallFunc_NPC_OnDamageReceived_Damage_ImplicitCast = CallFunc_NPC_OnDamageReceived_Damage_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC.BP_Creature_NPC_C.OnOwnerSet__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Creature_NPC_C::OnOwnerSet__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_C", "OnOwnerSet__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


