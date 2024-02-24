#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MenuActorBase.BP_MenuActorBase_C
// (Actor, Pawn)

class UClass* ABP_MenuActorBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MenuActorBase_C");

	return Clss;
}


// BP_MenuActorBase_C BP_MenuActorBase.Default__BP_MenuActorBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MenuActorBase_C* ABP_MenuActorBase_C::GetDefaultObj()
{
	static class ABP_MenuActorBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MenuActorBase_C*>(ABP_MenuActorBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MenuActorBase.BP_MenuActorBase_C.SetNPCCamera
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::SetNPCCamera(class AController* Controller, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "SetNPCCamera");

	Params::ABP_MenuActorBase_C_SetNPCCamera_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.RemoveMenus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::RemoveMenus(bool* bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "RemoveMenus");

	Params::ABP_MenuActorBase_C_RemoveMenus_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.CreateDialogueEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerController_C*      PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::CreateDialogueEvent(class ABP_PlayerController_C* PlayerController, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "CreateDialogueEvent");

	Params::ABP_MenuActorBase_C_CreateDialogueEvent_Params Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.RestorePlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveMenus_bSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::RestorePlayer(bool* bSuccess, bool CallFunc_RemoveMenus_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "RestorePlayer");

	Params::ABP_MenuActorBase_C_RestorePlayer_Params Parms{};

	Parms.CallFunc_RemoveMenus_bSuccess = CallFunc_RemoveMenus_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.ShowMerchant
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::ShowMerchant(bool* bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "ShowMerchant");

	Params::ABP_MenuActorBase_C_ShowMerchant_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.GetAssociatedEncounter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEncounterBase*              Associated_Encounter                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::GetAssociatedEncounter(class AEncounterBase** Associated_Encounter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "GetAssociatedEncounter");

	Params::ABP_MenuActorBase_C_GetAssociatedEncounter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Associated_Encounter != nullptr)
		*Associated_Encounter = Parms.Associated_Encounter;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.SetAssociatedEncounter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEncounterBase*              Associated_Encounter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::SetAssociatedEncounter(class AEncounterBase* Associated_Encounter, bool* Success, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "SetAssociatedEncounter");

	Params::ABP_MenuActorBase_C_SetAssociatedEncounter_Params Parms{};

	Parms.Associated_Encounter = Associated_Encounter;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.SetDialogue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogue*                   Dialogue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::SetDialogue(class UDialogue* Dialogue, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "SetDialogue");

	Params::ABP_MenuActorBase_C_SetDialogue_Params Parms{};

	Parms.Dialogue = Dialogue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.SetAmbientDialogue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogue*                   AmbientDialogue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::SetAmbientDialogue(class UDialogue* AmbientDialogue, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "SetAmbientDialogue");

	Params::ABP_MenuActorBase_C_SetAmbientDialogue_Params Parms{};

	Parms.AmbientDialogue = AmbientDialogue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.UpdateAnimBPValues
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsMoving                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsInAir                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsMinHealth                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bActiveBlendspace                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bHasTarget                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bHasMovementInput                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsAiming                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Direction                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ForwardSpeed                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TargetToCharacterRotationDifference                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MovementInputToVelocityDifference                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AimYawDelta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AimYawRate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TargetLocation                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Velocity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CharacterRotation                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FRotator                    LastVelocityRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FRotator                    LastMovementInputRotation                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FRotator                    LookingRotation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// enum class EAlertnessLevelType     AlertnessLevel                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::UpdateAnimBPValues(bool& bIsMoving, bool& bIsInAir, bool& bIsMinHealth, bool& bActiveBlendspace, bool& bHasTarget, bool& bHasMovementInput, bool& bIsAiming, double& Direction, double& ForwardSpeed, double& TargetToCharacterRotationDifference, double& MovementInputToVelocityDifference, double& AimYawDelta, double& AimYawRate, struct FVector& TargetLocation, struct FVector& Velocity, struct FRotator& CharacterRotation, struct FRotator& LastVelocityRotation, struct FRotator& LastMovementInputRotation, struct FRotator& LookingRotation, enum class EAlertnessLevelType& AlertnessLevel, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "UpdateAnimBPValues");

	Params::ABP_MenuActorBase_C_UpdateAnimBPValues_Params Parms{};

	Parms.bIsMoving = bIsMoving;
	Parms.bIsInAir = bIsInAir;
	Parms.bIsMinHealth = bIsMinHealth;
	Parms.bActiveBlendspace = bActiveBlendspace;
	Parms.bHasTarget = bHasTarget;
	Parms.bHasMovementInput = bHasMovementInput;
	Parms.bIsAiming = bIsAiming;
	Parms.Direction = Direction;
	Parms.ForwardSpeed = ForwardSpeed;
	Parms.TargetToCharacterRotationDifference = TargetToCharacterRotationDifference;
	Parms.MovementInputToVelocityDifference = MovementInputToVelocityDifference;
	Parms.AimYawDelta = AimYawDelta;
	Parms.AimYawRate = AimYawRate;
	Parms.TargetLocation = TargetLocation;
	Parms.Velocity = Velocity;
	Parms.CharacterRotation = CharacterRotation;
	Parms.LastVelocityRotation = LastVelocityRotation;
	Parms.LastMovementInputRotation = LastMovementInputRotation;
	Parms.LookingRotation = LookingRotation;
	Parms.AlertnessLevel = AlertnessLevel;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.GetNPCInfoForUIInterface
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_NPCInfoForUI_C>Interface                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::GetNPCInfoForUIInterface(TScriptInterface<class IBPI_NPCInfoForUI_C>* Interface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "GetNPCInfoForUIInterface");

	Params::ABP_MenuActorBase_C_GetNPCInfoForUIInterface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Interface != nullptr)
		*Interface = Parms.Interface;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.GetNPCFriendshipInterface
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_NPCFriendship_C>Interface                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::GetNPCFriendshipInterface(TScriptInterface<class IBPI_NPCFriendship_C>* Interface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "GetNPCFriendshipInterface");

	Params::ABP_MenuActorBase_C_GetNPCFriendshipInterface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Interface != nullptr)
		*Interface = Parms.Interface;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.GetNPCContractInterface
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_NPCContract_C>Interface                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::GetNPCContractInterface(TScriptInterface<class IBPI_NPCContract_C>* Interface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "GetNPCContractInterface");

	Params::ABP_MenuActorBase_C_GetNPCContractInterface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Interface != nullptr)
		*Interface = Parms.Interface;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.GetNPCDialogueInterface
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_NPCDialogue_C>Interface                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::GetNPCDialogueInterface(TScriptInterface<class IBPI_NPCDialogue_C>* Interface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "GetNPCDialogueInterface");

	Params::ABP_MenuActorBase_C_GetNPCDialogueInterface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Interface != nullptr)
		*Interface = Parms.Interface;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.GetWeakpointComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               HasInterface                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_WeakPoint_C>Interface                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::GetWeakpointComponent(bool* HasInterface, TScriptInterface<class IBPI_WeakPoint_C>* Interface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "GetWeakpointComponent");

	Params::ABP_MenuActorBase_C_GetWeakpointComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HasInterface != nullptr)
		*HasInterface = Parms.HasInterface;

	if (Interface != nullptr)
		*Interface = Parms.Interface;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.GetPingInterface
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               bHasInterface                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Ping_C>PingInterface                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::GetPingInterface(bool* bHasInterface, TScriptInterface<class IBPI_Ping_C>* PingInterface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "GetPingInterface");

	Params::ABP_MenuActorBase_C_GetPingInterface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bHasInterface != nullptr)
		*bHasInterface = Parms.bHasInterface;

	if (PingInterface != nullptr)
		*PingInterface = Parms.PingInterface;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.GetClothes_Back
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      BackComponent                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::GetClothes_Back(class USkeletalMeshComponent** BackComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "GetClothes_Back");

	Params::ABP_MenuActorBase_C_GetClothes_Back_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BackComponent != nullptr)
		*BackComponent = Parms.BackComponent;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.GetClothes_Jewelry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      JewelryComponent                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::GetClothes_Jewelry(class USkeletalMeshComponent** JewelryComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "GetClothes_Jewelry");

	Params::ABP_MenuActorBase_C_GetClothes_Jewelry_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (JewelryComponent != nullptr)
		*JewelryComponent = Parms.JewelryComponent;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.GetClothes_Glasses
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      GlassesComponent                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::GetClothes_Glasses(class USkeletalMeshComponent** GlassesComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "GetClothes_Glasses");

	Params::ABP_MenuActorBase_C_GetClothes_Glasses_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (GlassesComponent != nullptr)
		*GlassesComponent = Parms.GlassesComponent;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.GetBodyPart_Teeth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      TeethComponent                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::GetBodyPart_Teeth(class USkeletalMeshComponent** TeethComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "GetBodyPart_Teeth");

	Params::ABP_MenuActorBase_C_GetBodyPart_Teeth_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TeethComponent != nullptr)
		*TeethComponent = Parms.TeethComponent;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.GetBodyPart_Eyebrows
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      EyebrowsComponent                                                (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::GetBodyPart_Eyebrows(class USkeletalMeshComponent** EyebrowsComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "GetBodyPart_Eyebrows");

	Params::ABP_MenuActorBase_C_GetBodyPart_Eyebrows_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EyebrowsComponent != nullptr)
		*EyebrowsComponent = Parms.EyebrowsComponent;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.GetBodyPart_FacialHair
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      FacialHairComponent                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::GetBodyPart_FacialHair(class USkeletalMeshComponent** FacialHairComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "GetBodyPart_FacialHair");

	Params::ABP_MenuActorBase_C_GetBodyPart_FacialHair_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FacialHairComponent != nullptr)
		*FacialHairComponent = Parms.FacialHairComponent;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.GetCLothes_Gear
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      Gear                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::GetCLothes_Gear(class USkeletalMeshComponent** Gear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "GetCLothes_Gear");

	Params::ABP_MenuActorBase_C_GetCLothes_Gear_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Gear != nullptr)
		*Gear = Parms.Gear;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.GetBody
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      BodyComponent                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::GetBody(class USkeletalMeshComponent** BodyComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "GetBody");

	Params::ABP_MenuActorBase_C_GetBody_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BodyComponent != nullptr)
		*BodyComponent = Parms.BodyComponent;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.GetClothes_Torso
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      TorsoComponent                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::GetClothes_Torso(class USkeletalMeshComponent** TorsoComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "GetClothes_Torso");

	Params::ABP_MenuActorBase_C_GetClothes_Torso_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TorsoComponent != nullptr)
		*TorsoComponent = Parms.TorsoComponent;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.GetClothes_Bottom
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      PantsComponent                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::GetClothes_Bottom(class USkeletalMeshComponent** PantsComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "GetClothes_Bottom");

	Params::ABP_MenuActorBase_C_GetClothes_Bottom_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PantsComponent != nullptr)
		*PantsComponent = Parms.PantsComponent;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.GetClothes_Boots
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      ShoesComponent                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::GetClothes_Boots(class USkeletalMeshComponent** ShoesComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "GetClothes_Boots");

	Params::ABP_MenuActorBase_C_GetClothes_Boots_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShoesComponent != nullptr)
		*ShoesComponent = Parms.ShoesComponent;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.GetBodyPart_Hair
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      HairComponent                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::GetBodyPart_Hair(class USkeletalMeshComponent** HairComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "GetBodyPart_Hair");

	Params::ABP_MenuActorBase_C_GetBodyPart_Hair_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HairComponent != nullptr)
		*HairComponent = Parms.HairComponent;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.GetClothes_Head
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      HatComponent                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::GetClothes_Head(class USkeletalMeshComponent** HatComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "GetClothes_Head");

	Params::ABP_MenuActorBase_C_GetClothes_Head_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HatComponent != nullptr)
		*HatComponent = Parms.HatComponent;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.GetClothes_Gloves
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      GlovesComponent                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::GetClothes_Gloves(class USkeletalMeshComponent** GlovesComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "GetClothes_Gloves");

	Params::ABP_MenuActorBase_C_GetClothes_Gloves_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (GlovesComponent != nullptr)
		*GlovesComponent = Parms.GlovesComponent;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.GetBodyPart_Eyes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      EyeComponent                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::GetBodyPart_Eyes(class USkeletalMeshComponent** EyeComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "GetBodyPart_Eyes");

	Params::ABP_MenuActorBase_C_GetBodyPart_Eyes_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EyeComponent != nullptr)
		*EyeComponent = Parms.EyeComponent;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.CanQueryInteractable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Can_Query                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::CanQueryInteractable(bool* Can_Query)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "CanQueryInteractable");

	Params::ABP_MenuActorBase_C_CanQueryInteractable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Can_Query != nullptr)
		*Can_Query = Parms.Can_Query;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.HoldInteractionAvailable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bAvailable                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::HoldInteractionAvailable(bool* bAvailable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "HoldInteractionAvailable");

	Params::ABP_MenuActorBase_C_HoldInteractionAvailable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bAvailable != nullptr)
		*bAvailable = Parms.bAvailable;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.IsInteractionDisabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               bIsDisabled                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      DisabledText                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::IsInteractionDisabled(class AController* Controller, const struct FInteractionData& InteractionData, bool* bIsDisabled, class FString* DisabledText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "IsInteractionDisabled");

	Params::ABP_MenuActorBase_C_IsInteractionDisabled_Params Parms{};

	Parms.Controller = Controller;
	Parms.InteractionData = InteractionData;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsDisabled != nullptr)
		*bIsDisabled = Parms.bIsDisabled;

	if (DisabledText != nullptr)
		*DisabledText = std::move(Parms.DisabledText);

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.DoesHaveResourceType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              HitId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EResourceType           DesiredResourceType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bHasResourceType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::DoesHaveResourceType(int32 HitId, enum class EResourceType DesiredResourceType, bool* bHasResourceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "DoesHaveResourceType");

	Params::ABP_MenuActorBase_C_DoesHaveResourceType_Params Parms{};

	Parms.HitId = HitId;
	Parms.DesiredResourceType = DesiredResourceType;

	UObject::ProcessEvent(Func, &Parms);

	if (bHasResourceType != nullptr)
		*bHasResourceType = Parms.bHasResourceType;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.IsHarvestable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FInteractionData            Interaction                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               IsHarvestable                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::IsHarvestable(const struct FInteractionData& Interaction, bool* IsHarvestable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "IsHarvestable");

	Params::ABP_MenuActorBase_C_IsHarvestable_Params Parms{};

	Parms.Interaction = Interaction;

	UObject::ProcessEvent(Func, &Parms);

	if (IsHarvestable != nullptr)
		*IsHarvestable = Parms.IsHarvestable;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.GetInteractIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// TSoftObjectPtr<class UTexture2D>   Icon                                                             (Parm, OutParm, HasGetValueTypeHash)

void ABP_MenuActorBase_C::GetInteractIcon(const struct FInteractionData& InteractionData, TSoftObjectPtr<class UTexture2D>* Icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "GetInteractIcon");

	Params::ABP_MenuActorBase_C_GetInteractIcon_Params Parms{};

	Parms.InteractionData = InteractionData;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.GetInteractText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class FString                      InteractText                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::GetInteractText(const struct FInteractionData& InteractionData, class FString* InteractText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "GetInteractText");

	Params::ABP_MenuActorBase_C_GetInteractText_Params Parms{};

	Parms.InteractionData = InteractionData;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractText != nullptr)
		*InteractText = std::move(Parms.InteractText);

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.InteractionRequiresClientOnly
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               RequiresClientAction                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::InteractionRequiresClientOnly(class AController* Controller, bool* RequiresClientAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "InteractionRequiresClientOnly");

	Params::ABP_MenuActorBase_C_InteractionRequiresClientOnly_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

	if (RequiresClientAction != nullptr)
		*RequiresClientAction = Parms.RequiresClientAction;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.InteractReleased
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::InteractReleased(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "InteractReleased");

	Params::ABP_MenuActorBase_C_InteractReleased_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.InteractPressed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::InteractPressed(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "InteractPressed");

	Params::ABP_MenuActorBase_C_InteractPressed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.ReturnMeshToHighlight
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// TArray<class UStaticMeshComponent*>StaticMesh_to_Highlight                                          (Parm, OutParm, ContainsInstancedReference)
// TArray<class USkeletalMeshComponent*>SkeletalMesh_to_Highlight                                        (Parm, OutParm, ContainsInstancedReference)
// bool                               Hostile_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            Quality                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UStaticMeshComponent*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// TArray<class USkeletalMeshComponent*>K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)

void ABP_MenuActorBase_C::ReturnMeshToHighlight(const struct FInteractionData& InteractionData, TArray<class UStaticMeshComponent*>* StaticMesh_to_Highlight, TArray<class USkeletalMeshComponent*>* SkeletalMesh_to_Highlight, bool* Hostile_, enum class EItemQuality* Quality, TArray<class UStaticMeshComponent*>& K2Node_MakeArray_Array, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "ReturnMeshToHighlight");

	Params::ABP_MenuActorBase_C_ReturnMeshToHighlight_Params Parms{};

	Parms.InteractionData = InteractionData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;

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


// Function BP_MenuActorBase.BP_MenuActorBase_C.CanInteractWithActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               InteractAvailable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::CanInteractWithActor(class AController* Controller, const struct FInteractionData& InteractionData, bool* InteractAvailable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "CanInteractWithActor");

	Params::ABP_MenuActorBase_C_CanInteractWithActor_Params Parms{};

	Parms.Controller = Controller;
	Parms.InteractionData = InteractionData;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractAvailable != nullptr)
		*InteractAvailable = Parms.InteractAvailable;

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.OnRep_Ambient Dialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MenuActorBase_C::OnRep_Ambient_Dialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "OnRep_Ambient Dialogue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.OnRep_Dialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MenuActorBase_C::OnRep_Dialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "OnRep_Dialogue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.OnRep_Associated Encounter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MenuActorBase_C::OnRep_Associated_Encounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "OnRep_Associated Encounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.CrossServerSetAssociatedEncounter
// (Net, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEncounterBase*              Associated_Encounter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::CrossServerSetAssociatedEncounter(class AEncounterBase* Associated_Encounter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "CrossServerSetAssociatedEncounter");

	Params::ABP_MenuActorBase_C_CrossServerSetAssociatedEncounter_Params Parms{};

	Parms.Associated_Encounter = Associated_Encounter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.CrossServerSetDialogue
// (Net, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogue*                   Dialogue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::CrossServerSetDialogue(class UDialogue* Dialogue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "CrossServerSetDialogue");

	Params::ABP_MenuActorBase_C_CrossServerSetDialogue_Params Parms{};

	Parms.Dialogue = Dialogue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.CrossServerSetAmbientDialogue
// (Net, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogue*                   AmbientDialogue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::CrossServerSetAmbientDialogue(class UDialogue* AmbientDialogue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "CrossServerSetAmbientDialogue");

	Params::ABP_MenuActorBase_C_CrossServerSetAmbientDialogue_Params Parms{};

	Parms.AmbientDialogue = AmbientDialogue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.PerformClientSideInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::PerformClientSideInteraction(class AController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "PerformClientSideInteraction");

	Params::ABP_MenuActorBase_C_PerformClientSideInteraction_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.CallCrossServerOnInteracted
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 InteractingController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::CallCrossServerOnInteracted(class AController* InteractingController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "CallCrossServerOnInteracted");

	Params::ABP_MenuActorBase_C_CallCrossServerOnInteracted_Params Parms{};

	Parms.InteractingController = InteractingController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.ExecuteUbergraph_BP_MenuActorBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_InteractingController                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AEncounterBase*              K2Node_CustomEvent_Associated_Encounter                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDialogue*                   K2Node_CustomEvent_Dialogue                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDialogue*                   K2Node_CustomEvent_AmbientDialogue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_Controller                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_UIMenusComponent_C*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActorBase_C::ExecuteUbergraph_BP_MenuActorBase(int32 EntryPoint, class AController* K2Node_Event_InteractingController, class AEncounterBase* K2Node_CustomEvent_Associated_Encounter, class UDialogue* K2Node_CustomEvent_Dialogue, class UDialogue* K2Node_CustomEvent_AmbientDialogue, class AController* K2Node_Event_Controller, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBP_UIMenusComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "ExecuteUbergraph_BP_MenuActorBase");

	Params::ABP_MenuActorBase_C_ExecuteUbergraph_BP_MenuActorBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InteractingController = K2Node_Event_InteractingController;
	Parms.K2Node_CustomEvent_Associated_Encounter = K2Node_CustomEvent_Associated_Encounter;
	Parms.K2Node_CustomEvent_Dialogue = K2Node_CustomEvent_Dialogue;
	Parms.K2Node_CustomEvent_AmbientDialogue = K2Node_CustomEvent_AmbientDialogue;
	Parms.K2Node_Event_Controller = K2Node_Event_Controller;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MenuActorBase.BP_MenuActorBase_C.OnDialogueStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MenuActorBase_C::OnDialogueStart__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuActorBase_C", "OnDialogueStart__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


