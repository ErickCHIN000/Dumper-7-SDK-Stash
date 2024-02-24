#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C
// (Actor)

class UClass* ADrone_PlayerCompanionParent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Drone_PlayerCompanionParent_C");

	return Clss;
}


// Drone_PlayerCompanionParent_C Drone_PlayerCompanionParent.Default__Drone_PlayerCompanionParent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADrone_PlayerCompanionParent_C* ADrone_PlayerCompanionParent_C::GetDefaultObj()
{
	static class ADrone_PlayerCompanionParent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADrone_PlayerCompanionParent_C*>(ADrone_PlayerCompanionParent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.Enemy_OnPolymorphStart
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_PlayerCompanionParent_C::Enemy_OnPolymorphStart(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "Enemy_OnPolymorphStart");

	Params::ADrone_PlayerCompanionParent_C_Enemy_OnPolymorphStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.Enemy_OnPolymorphStop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_PlayerCompanionParent_C::Enemy_OnPolymorphStop(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "Enemy_OnPolymorphStop");

	Params::ADrone_PlayerCompanionParent_C_Enemy_OnPolymorphStop_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.GetCompanionTargetingSocket
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Socket                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_PlayerCompanionParent_C::GetCompanionTargetingSocket(class FName* Socket)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "GetCompanionTargetingSocket");

	Params::ADrone_PlayerCompanionParent_C_GetCompanionTargetingSocket_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Socket != nullptr)
		*Socket = Parms.Socket;

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.CanEnemyBeTeamSwapped
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_PlayerCompanionParent_C::CanEnemyBeTeamSwapped(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "CanEnemyBeTeamSwapped");

	Params::ADrone_PlayerCompanionParent_C_CanEnemyBeTeamSwapped_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.CompanionDespawn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_PlayerCompanionParent_C::CompanionDespawn(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "CompanionDespawn");

	Params::ADrone_PlayerCompanionParent_C_CompanionDespawn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.CompanionSpawn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_PlayerCompanionParent_C::CompanionSpawn(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "CompanionSpawn");

	Params::ADrone_PlayerCompanionParent_C_CompanionSpawn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.CompanionDeath
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_PlayerCompanionParent_C::CompanionDeath(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "CompanionDeath");

	Params::ADrone_PlayerCompanionParent_C_CompanionDeath_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.IsCompanionInCombat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_PlayerCompanionParent_C::IsCompanionInCombat(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "IsCompanionInCombat");

	Params::ADrone_PlayerCompanionParent_C_IsCompanionInCombat_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.KillCompanion
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_PlayerCompanionParent_C::KillCompanion(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "KillCompanion");

	Params::ADrone_PlayerCompanionParent_C_KillCompanion_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.OnRep_PreviousTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UOakDamageComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_PlayerCompanionParent_C::OnRep_PreviousTarget(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "OnRep_PreviousTarget");

	Params::ADrone_PlayerCompanionParent_C_OnRep_PreviousTarget_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.SetNewTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      NewTarget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_PlayerCompanionParent_C::SetNewTarget(class AActor* NewTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "SetNewTarget");

	Params::ADrone_PlayerCompanionParent_C_SetNewTarget_Params Parms{};

	Parms.NewTarget = NewTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.CanISeeMyTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetAssociatedController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxAIController*            K2Node_DynamicCast_AsGbx_AIController                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LineOfSightTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_PlayerCompanionParent_C::CanISeeMyTarget(bool* Res, class AController* CallFunc_GetAssociatedController_ReturnValue, class AGbxAIController* K2Node_DynamicCast_AsGbx_AIController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LineOfSightTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "CanISeeMyTarget");

	Params::ADrone_PlayerCompanionParent_C_CanISeeMyTarget_Params Parms{};

	Parms.CallFunc_GetAssociatedController_ReturnValue = CallFunc_GetAssociatedController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGbx_AIController = K2Node_DynamicCast_AsGbx_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LineOfSightTo_ReturnValue = CallFunc_LineOfSightTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.ShouldDespawnCompanion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CompanionDespawn_Res                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetDroneOwner_DroneOwner                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasPlayerClass_Res                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_PlayerCompanionParent_C::ShouldDespawnCompanion(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_CompanionDespawn_Res, class AActor* CallFunc_GetDroneOwner_DroneOwner, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasPlayerClass_Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "ShouldDespawnCompanion");

	Params::ADrone_PlayerCompanionParent_C_ShouldDespawnCompanion_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_CompanionDespawn_Res = CallFunc_CompanionDespawn_Res;
	Parms.CallFunc_GetDroneOwner_DroneOwner = CallFunc_GetDroneOwner_DroneOwner;
	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasPlayerClass_Res = CallFunc_HasPlayerClass_Res;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.GetDroneOwner
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      DroneOwner                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_PlayerCompanionParent_C::GetDroneOwner(class AActor** DroneOwner, class AActor* CallFunc_GetOwner_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "GetDroneOwner");

	Params::ADrone_PlayerCompanionParent_C_GetDroneOwner_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DroneOwner != nullptr)
		*DroneOwner = Parms.DroneOwner;

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.HandleInteracts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_PlayerCompanionParent_C::HandleInteracts(TArray<struct FGbxActionRegister>& Temp_struct_Variable, float CallFunc_GetDataTableValueFromHandle_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UGbxAction* CallFunc_K2Play_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "HandleInteracts");

	Params::ADrone_PlayerCompanionParent_C_HandleInteracts_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.SetDroneMovement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DroneSpeed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              HoverAltitude                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              HoverAltitudeThreshold                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              HoverRadius                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              HoverRadiusMin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              HoverSpeed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakDroneFacingMode     FacingMode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_PlayerCompanionParent_C::SetDroneMovement(float DroneSpeed, float HoverAltitude, float HoverAltitudeThreshold, float HoverRadius, float HoverRadiusMin, float HoverSpeed, enum class EOakDroneFacingMode FacingMode, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "SetDroneMovement");

	Params::ADrone_PlayerCompanionParent_C_SetDroneMovement_Params Parms{};

	Parms.DroneSpeed = DroneSpeed;
	Parms.HoverAltitude = HoverAltitude;
	Parms.HoverAltitudeThreshold = HoverAltitudeThreshold;
	Parms.HoverRadius = HoverRadius;
	Parms.HoverRadiusMin = HoverRadiusMin;
	Parms.HoverSpeed = HoverSpeed;
	Parms.FacingMode = FacingMode;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.CompanionDespawnActions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable1                                            (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_PlayerCompanionParent_C::CompanionDespawnActions(TArray<struct FGbxActionRegister>& Temp_struct_Variable, TArray<struct FGbxActionRegister>& Temp_struct_Variable1, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue1, class UGbxAction* CallFunc_K2Play_ReturnValue, class UGbxAction* CallFunc_K2Play_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "CompanionDespawnActions");

	Params::ADrone_PlayerCompanionParent_C_CompanionDespawnActions_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue1 = CallFunc_IsValidClass_ReturnValue1;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;
	Parms.CallFunc_K2Play_ReturnValue1 = CallFunc_K2Play_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.CompanionSpawnActions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable1                                            (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_PlayerCompanionParent_C::CompanionSpawnActions(TArray<struct FGbxActionRegister>& Temp_struct_Variable, TArray<struct FGbxActionRegister>& Temp_struct_Variable1, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue1, class UGbxAction* CallFunc_K2Play_ReturnValue, class UGbxAction* CallFunc_K2Play_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "CompanionSpawnActions");

	Params::ADrone_PlayerCompanionParent_C_CompanionSpawnActions_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue1 = CallFunc_IsValidClass_ReturnValue1;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;
	Parms.CallFunc_K2Play_ReturnValue1 = CallFunc_K2Play_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.InitPlayerCompanionParentData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetDroneOwner_DroneOwner                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakPlayerAbilityManagerComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAbility*                 CallFunc_GetClassFeat_Res                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBPEventHub_PlayerCharacter_C*K2Node_DynamicCast_AsBPEvent_Hub_Player_Character                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_PlayerCompanionParent_C::InitPlayerCompanionParentData(class AActor* CallFunc_GetDroneOwner_DroneOwner, class UOakPlayerAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class UGbxAbility* CallFunc_GetClassFeat_Res, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess1, class APawn* CallFunc_GetInstigator_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "InitPlayerCompanionParentData");

	Params::ADrone_PlayerCompanionParent_C_InitPlayerCompanionParentData_Params Parms{};

	Parms.CallFunc_GetDroneOwner_DroneOwner = CallFunc_GetDroneOwner_DroneOwner;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetClassFeat_Res = CallFunc_GetClassFeat_Res;
	Parms.K2Node_DynamicCast_AsBPEvent_Hub_Player_Character = K2Node_DynamicCast_AsBPEvent_Hub_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.SetDroneUsable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Usable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_PlayerCompanionParent_C::SetDroneUsable(bool Usable, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "SetDroneUsable");

	Params::ADrone_PlayerCompanionParent_C_SetDroneUsable_Params Parms{};

	Parms.Usable = Usable;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.OnRep_CompanionInCombat
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_PlayerCompanionParent_C::OnRep_CompanionInCombat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "OnRep_CompanionInCombat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.SetCompanionInCombat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InCombat                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_PlayerCompanionParent_C::SetCompanionInCombat(bool InCombat, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "SetCompanionInCombat");

	Params::ADrone_PlayerCompanionParent_C_SetCompanionInCombat_Params Parms{};

	Parms.InCombat = InCombat;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.HandleTargeting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_PlayerCompanionParent_C::HandleTargeting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "HandleTargeting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.PlayerAlertOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OverrideTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTargetableComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTargetableByAIPlayers_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTargetableByActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHostile_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_PlayerCompanionParent_C::PlayerAlertOverride(class AActor* OverrideTarget, class UTargetableComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsTargetableByAIPlayers_ReturnValue, bool CallFunc_IsTargetableByActor_ReturnValue, bool CallFunc_IsHostile_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "PlayerAlertOverride");

	Params::ADrone_PlayerCompanionParent_C_PlayerAlertOverride_Params Parms{};

	Parms.OverrideTarget = OverrideTarget;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsTargetableByAIPlayers_ReturnValue = CallFunc_IsTargetableByAIPlayers_ReturnValue;
	Parms.CallFunc_IsTargetableByActor_ReturnValue = CallFunc_IsTargetableByActor_ReturnValue;
	Parms.CallFunc_IsHostile_ReturnValue = CallFunc_IsHostile_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.HandleTethering
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)

void ADrone_PlayerCompanionParent_C::HandleTethering(float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "HandleTethering");

	Params::ADrone_PlayerCompanionParent_C_HandleTethering_Params Parms{};

	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.GetTetherTeleport
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetDroneOwner_DroneOwner                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetDroneOwner_DroneOwner1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RunEnvQueryForBestLocation_ResultLocation               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunEnvQueryForBestLocation_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)

struct FTransform ADrone_PlayerCompanionParent_C::GetTetherTeleport(class AActor* CallFunc_GetDroneOwner_DroneOwner, class AActor* CallFunc_GetDroneOwner_DroneOwner1, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_RunEnvQueryForBestLocation_ResultLocation, bool CallFunc_RunEnvQueryForBestLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "GetTetherTeleport");

	Params::ADrone_PlayerCompanionParent_C_GetTetherTeleport_Params Parms{};

	Parms.CallFunc_GetDroneOwner_DroneOwner = CallFunc_GetDroneOwner_DroneOwner;
	Parms.CallFunc_GetDroneOwner_DroneOwner1 = CallFunc_GetDroneOwner_DroneOwner1;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_RunEnvQueryForBestLocation_ResultLocation = CallFunc_RunEnvQueryForBestLocation_ResultLocation;
	Parms.CallFunc_RunEnvQueryForBestLocation_ReturnValue = CallFunc_RunEnvQueryForBestLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.TetherCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetDroneOwner_DroneOwner                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTetherTeleport_ReturnValue                           (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_TeleportTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDistanceBetweenVectors_Distance                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_PlayerCompanionParent_C::TetherCheck(class AActor* CallFunc_GetDroneOwner_DroneOwner, const struct FTransform& CallFunc_GetTetherTeleport_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, bool CallFunc_K2_TeleportTo_ReturnValue, float CallFunc_GetDistanceBetweenVectors_Distance, bool CallFunc_Less_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "TetherCheck");

	Params::ADrone_PlayerCompanionParent_C_TetherCheck_Params Parms{};

	Parms.CallFunc_GetDroneOwner_DroneOwner = CallFunc_GetDroneOwner_DroneOwner;
	Parms.CallFunc_GetTetherTeleport_ReturnValue = CallFunc_GetTetherTeleport_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1 = CallFunc_K2_GetActorLocation_ReturnValue1;
	Parms.CallFunc_K2_TeleportTo_ReturnValue = CallFunc_K2_TeleportTo_ReturnValue;
	Parms.CallFunc_GetDistanceBetweenVectors_Distance = CallFunc_GetDistanceBetweenVectors_Distance;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.CompanionCleanup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAttributeDelegateBindingHandleCallFunc_Array_Get_Item                                          (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_PlayerCompanionParent_C::CompanionCleanup(int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FGbxAttributeDelegateBindingHandle& CallFunc_Array_Get_Item, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "CompanionCleanup");

	Params::ADrone_PlayerCompanionParent_C_CompanionCleanup_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.TrackCompanion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TrackStatus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class UOakGameInstance*            K2Node_DynamicCast_AsOak_Game_Instance                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetManagedActorCount_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue1                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue2                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue3                              (ZeroConstructor, HasGetValueTypeHash)

void ADrone_PlayerCompanionParent_C::TrackCompanion(bool TrackStatus, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class UOakGameInstance* K2Node_DynamicCast_AsOak_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_GetManagedActorCount_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue1, const class FString& CallFunc_Concat_StrStr_ReturnValue2, const class FString& CallFunc_Concat_StrStr_ReturnValue3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "TrackCompanion");

	Params::ADrone_PlayerCompanionParent_C_TrackCompanion_Params Parms{};

	Parms.TrackStatus = TrackStatus;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Game_Instance = K2Node_DynamicCast_AsOak_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetManagedActorCount_ReturnValue = CallFunc_GetManagedActorCount_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue1 = CallFunc_Concat_StrStr_ReturnValue1;
	Parms.CallFunc_Concat_StrStr_ReturnValue2 = CallFunc_Concat_StrStr_ReturnValue2;
	Parms.CallFunc_Concat_StrStr_ReturnValue3 = CallFunc_Concat_StrStr_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.OnOwnerLevelUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OldExperienceLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewExperienceLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBalanceStateComponent*      CallFunc_GetBalanceComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_PlayerCompanionParent_C::OnOwnerLevelUp(int32 OldExperienceLevel, int32 NewExperienceLevel, class UBalanceStateComponent* CallFunc_GetBalanceComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "OnOwnerLevelUp");

	Params::ADrone_PlayerCompanionParent_C_OnOwnerLevelUp_Params Parms{};

	Parms.OldExperienceLevel = OldExperienceLevel;
	Parms.NewExperienceLevel = NewExperienceLevel;
	Parms.CallFunc_GetBalanceComponent_ReturnValue = CallFunc_GetBalanceComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.InitSelfBalance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBalanceStateComponent*      CallFunc_GetBalanceComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerBalanceStateComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetExperienceLevel_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_PlayerCompanionParent_C::InitSelfBalance(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APawn* CallFunc_GetInstigator_ReturnValue, class UBalanceStateComponent* CallFunc_GetBalanceComponent_ReturnValue, class UPlayerBalanceStateComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_GetExperienceLevel_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "InitSelfBalance");

	Params::ADrone_PlayerCompanionParent_C_InitSelfBalance_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_GetBalanceComponent_ReturnValue = CallFunc_GetBalanceComponent_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetExperienceLevel_ReturnValue = CallFunc_GetExperienceLevel_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.SetFlyToTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_PlayerCompanionParent_C::SetFlyToTarget(bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "SetFlyToTarget");

	Params::ADrone_PlayerCompanionParent_C_SetFlyToTarget_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.SetHoverAtOwner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_PlayerCompanionParent_C::SetHoverAtOwner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "SetHoverAtOwner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.SetHoverAtTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_PlayerCompanionParent_C::SetHoverAtTarget(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "SetHoverAtTarget");

	Params::ADrone_PlayerCompanionParent_C_SetHoverAtTarget_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.OnTargetDied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageReceiver                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_PlayerCompanionParent_C::OnTargetDied(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "OnTargetDied");

	Params::ADrone_PlayerCompanionParent_C_OnTargetDied_Params Parms{};

	Parms.DamageReceiver = DamageReceiver;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.OnRep_CurrentTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_SetCompanionInCombat_Res                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetCompanionInCombat_Res1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakDamageComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_PlayerCompanionParent_C::OnRep_CurrentTarget(bool CallFunc_SetCompanionInCombat_Res, bool CallFunc_SetCompanionInCombat_Res1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "OnRep_CurrentTarget");

	Params::ADrone_PlayerCompanionParent_C_OnRep_CurrentTarget_Params Parms{};

	Parms.CallFunc_SetCompanionInCombat_Res = CallFunc_SetCompanionInCombat_Res;
	Parms.CallFunc_SetCompanionInCombat_Res1 = CallFunc_SetCompanionInCombat_Res1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.ReturnToOwner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)

void ADrone_PlayerCompanionParent_C::ReturnToOwner(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "ReturnToOwner");

	Params::ADrone_PlayerCompanionParent_C_ReturnToOwner_Params Parms{};

	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.FindTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetDroneOwner_DroneOwner                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// class AActor*                      CallFunc_RunEnvQueryForBestActor_ResultActor                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunEnvQueryForBestActor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_PlayerCompanionParent_C::FindTarget(class AActor* CallFunc_GetDroneOwner_DroneOwner, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "FindTarget");

	Params::ADrone_PlayerCompanionParent_C_FindTarget_Params Parms{};

	Parms.CallFunc_GetDroneOwner_DroneOwner = CallFunc_GetDroneOwner_DroneOwner;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_RunEnvQueryForBestActor_ResultActor = CallFunc_RunEnvQueryForBestActor_ResultActor;
	Parms.CallFunc_RunEnvQueryForBestActor_ReturnValue = CallFunc_RunEnvQueryForBestActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.CheckTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_PlayerCompanionParent_C::CheckTarget(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "CheckTarget");

	Params::ADrone_PlayerCompanionParent_C_CheckTarget_Params Parms{};

	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.OnRep_EnableTargeting
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_PlayerCompanionParent_C::OnRep_EnableTargeting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "OnRep_EnableTargeting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.SetTargetingEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_PlayerCompanionParent_C::SetTargetingEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "SetTargetingEnabled");

	Params::ADrone_PlayerCompanionParent_C_SetTargetingEnabled_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_PlayerCompanionParent_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.OnPlayerAlert
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TargetLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakPlayerController*        InstigatingController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_PlayerCompanionParent_C::OnPlayerAlert(class AActor* TargetActor, const struct FVector& TargetLocation, class AOakPlayerController* InstigatingController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "OnPlayerAlert");

	Params::ADrone_PlayerCompanionParent_C_OnPlayerAlert_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.TargetLocation = TargetLocation;
	Parms.InstigatingController = InstigatingController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.Necromancer_15_Buff_Activated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_PlayerCompanionParent_C::Necromancer_15_Buff_Activated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "Necromancer_15_Buff_Activated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.Necromancer_15_Buff_Deactivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_PlayerCompanionParent_C::Necromancer_15_Buff_Deactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "Necromancer_15_Buff_Deactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_Drone_PlayerCompanionParent
// (BlueprintEvent)
// Parameters:
// class AActor*                      DamageReceiver                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_PlayerCompanionParent_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_Drone_PlayerCompanionParent(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_Drone_PlayerCompanionParent");

	Params::ADrone_PlayerCompanionParent_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_Drone_PlayerCompanionParent_Params Parms{};

	Parms.DamageReceiver = DamageReceiver;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.Enemy_OnThoughtLockStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_PlayerCompanionParent_C::Enemy_OnThoughtLockStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "Enemy_OnThoughtLockStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.BndEvt__OakUsable_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_Drone_Necromancer_DemiLich
// (BlueprintEvent)
// Parameters:
// class AController*                 UserController                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         UsedComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_PlayerCompanionParent_C::BndEvt__OakUsable_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_Drone_Necromancer_DemiLich(class AController* UserController, class UPrimitiveComponent* UsedComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "BndEvt__OakUsable_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_Drone_Necromancer_DemiLich");

	Params::ADrone_PlayerCompanionParent_C_BndEvt__OakUsable_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_Drone_Necromancer_DemiLich_Params Parms{};

	Parms.UserController = UserController;
	Parms.UsedComponent = UsedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.UnlockInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_PlayerCompanionParent_C::UnlockInteraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "UnlockInteraction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.TriggerFidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_PlayerCompanionParent_C::TriggerFidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "TriggerFidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.Enemy_OnThoughtLockStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_PlayerCompanionParent_C::Enemy_OnThoughtLockStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "Enemy_OnThoughtLockStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.Health_Recalculate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              OldValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_PlayerCompanionParent_C::Health_Recalculate(float OldValue, float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "Health_Recalculate");

	Params::ADrone_PlayerCompanionParent_C_Health_Recalculate_Params Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADrone_PlayerCompanionParent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.Enemy_OnPhaseLockStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_PlayerCompanionParent_C::Enemy_OnPhaseLockStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "Enemy_OnPhaseLockStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_PlayerCompanionParent_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "ReceiveEndPlay");

	Params::ADrone_PlayerCompanionParent_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.Player_SpawnTransfusionProjectile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      DataBlueprint__Override_                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      DamageType__Override_                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      SourceActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Causer__Override_                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_PlayerCompanionParent_C::Player_SpawnTransfusionProjectile(class UClass* DataBlueprint__Override_, class UClass* DamageType__Override_, class AActor* SourceActor, class AActor* TargetActor, float Damage, class AActor* Causer__Override_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "Player_SpawnTransfusionProjectile");

	Params::ADrone_PlayerCompanionParent_C_Player_SpawnTransfusionProjectile_Params Parms{};

	Parms.DataBlueprint__Override_ = DataBlueprint__Override_;
	Parms.DamageType__Override_ = DamageType__Override_;
	Parms.SourceActor = SourceActor;
	Parms.TargetActor = TargetActor;
	Parms.Damage = Damage;
	Parms.Causer__Override_ = Causer__Override_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.Enemy_OnPhaseLockStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_PlayerCompanionParent_C::Enemy_OnPhaseLockStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "Enemy_OnPhaseLockStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.Player_HealthDepleted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*               Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_PlayerCompanionParent_C::Player_HealthDepleted(class AOakCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "Player_HealthDepleted");

	Params::ADrone_PlayerCompanionParent_C_Player_HealthDepleted_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.ExecuteUbergraph_Drone_PlayerCompanionParent
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_EvaluateConditionType_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_EvaluateConditionType_ReturnValue1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 K2Node_ComponentBoundEvent_UserController                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_UsedComponent                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CompanionSpawn_Res                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CompanionDeath_Res                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// float                              K2Node_CustomEvent_OldValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetAssociatedPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_DamageReceiver                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_DamageCauser                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Event_DataBlueprint__Override_                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Event_DamageType__Override_                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_SourceActor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_TargetActor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Causer__Override_                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue1                        (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter*               K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_TargetActor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_TargetLocation                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakPlayerController*        K2Node_CustomEvent_InstigatingController                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// struct FGbxAttributeDelegateBindingHandleCallFunc_BindEventToOnAttributeChanged_ReturnValue               (None)
// struct FGbxAttributeDelegateBindingHandleCallFunc_BindEventToOnAttributeChanged_ReturnValue1              (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// struct FGbxAttributeDelegateBindingHandleCallFunc_BindEventToOnAttributeChanged_ReturnValue2              (None)
// struct FGbxAttributeDelegateBindingHandleCallFunc_BindEventToOnAttributeChanged_ReturnValue3              (None)
// TArray<struct FGbxAttributeDelegateBindingHandle>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)

void ADrone_PlayerCompanionParent_C::ExecuteUbergraph_Drone_PlayerCompanionParent(int32 EntryPoint, bool CallFunc_K2_EvaluateConditionType_ReturnValue, bool CallFunc_K2_EvaluateConditionType_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AController* K2Node_ComponentBoundEvent_UserController, class UPrimitiveComponent* K2Node_ComponentBoundEvent_UsedComponent, bool CallFunc_CompanionSpawn_Res, bool CallFunc_CompanionDeath_Res, bool CallFunc_IsValidClass_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BooleanAND_ReturnValue1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float K2Node_CustomEvent_OldValue, float K2Node_CustomEvent_NewValue, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, class AActor* K2Node_ComponentBoundEvent_DamageReceiver, class AActor* K2Node_ComponentBoundEvent_DamageCauser, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UClass* K2Node_Event_DataBlueprint__Override_, class UClass* K2Node_Event_DamageType__Override_, class AActor* K2Node_Event_SourceActor, class AActor* K2Node_Event_TargetActor, float K2Node_Event_Damage, class AActor* K2Node_Event_Causer__Override_, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue, class AOakCharacter* K2Node_Event_Character, class AActor* K2Node_CustomEvent_TargetActor, const struct FVector& K2Node_CustomEvent_TargetLocation, class AOakPlayerController* K2Node_CustomEvent_InstigatingController, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, const struct FGbxAttributeDelegateBindingHandle& CallFunc_BindEventToOnAttributeChanged_ReturnValue, const struct FGbxAttributeDelegateBindingHandle& CallFunc_BindEventToOnAttributeChanged_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, const struct FGbxAttributeDelegateBindingHandle& CallFunc_BindEventToOnAttributeChanged_ReturnValue2, const struct FGbxAttributeDelegateBindingHandle& CallFunc_BindEventToOnAttributeChanged_ReturnValue3, TArray<struct FGbxAttributeDelegateBindingHandle>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "ExecuteUbergraph_Drone_PlayerCompanionParent");

	Params::ADrone_PlayerCompanionParent_C_ExecuteUbergraph_Drone_PlayerCompanionParent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_EvaluateConditionType_ReturnValue = CallFunc_K2_EvaluateConditionType_ReturnValue;
	Parms.CallFunc_K2_EvaluateConditionType_ReturnValue1 = CallFunc_K2_EvaluateConditionType_ReturnValue1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_UserController = K2Node_ComponentBoundEvent_UserController;
	Parms.K2Node_ComponentBoundEvent_UsedComponent = K2Node_ComponentBoundEvent_UsedComponent;
	Parms.CallFunc_CompanionSpawn_Res = CallFunc_CompanionSpawn_Res;
	Parms.CallFunc_CompanionDeath_Res = CallFunc_CompanionDeath_Res;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CustomEvent_OldValue = K2Node_CustomEvent_OldValue;
	Parms.K2Node_CustomEvent_NewValue = K2Node_CustomEvent_NewValue;
	Parms.CallFunc_GetAssociatedPlayerController_ReturnValue = CallFunc_GetAssociatedPlayerController_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_DamageReceiver = K2Node_ComponentBoundEvent_DamageReceiver;
	Parms.K2Node_ComponentBoundEvent_DamageCauser = K2Node_ComponentBoundEvent_DamageCauser;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_Event_DataBlueprint__Override_ = K2Node_Event_DataBlueprint__Override_;
	Parms.K2Node_Event_DamageType__Override_ = K2Node_Event_DamageType__Override_;
	Parms.K2Node_Event_SourceActor = K2Node_Event_SourceActor;
	Parms.K2Node_Event_TargetActor = K2Node_Event_TargetActor;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_Causer__Override_ = K2Node_Event_Causer__Override_;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue1 = CallFunc_K2_SetTimerDelegate_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;
	Parms.K2Node_Event_Character = K2Node_Event_Character;
	Parms.K2Node_CustomEvent_TargetActor = K2Node_CustomEvent_TargetActor;
	Parms.K2Node_CustomEvent_TargetLocation = K2Node_CustomEvent_TargetLocation;
	Parms.K2Node_CustomEvent_InstigatingController = K2Node_CustomEvent_InstigatingController;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.CallFunc_BindEventToOnAttributeChanged_ReturnValue = CallFunc_BindEventToOnAttributeChanged_ReturnValue;
	Parms.CallFunc_BindEventToOnAttributeChanged_ReturnValue1 = CallFunc_BindEventToOnAttributeChanged_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.CallFunc_BindEventToOnAttributeChanged_ReturnValue2 = CallFunc_BindEventToOnAttributeChanged_ReturnValue2;
	Parms.CallFunc_BindEventToOnAttributeChanged_ReturnValue3 = CallFunc_BindEventToOnAttributeChanged_ReturnValue3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.CompanionOnDeath__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_PlayerCompanionParent_C::CompanionOnDeath__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "CompanionOnDeath__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.CompanionOnCausedAnyDamage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageInstigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ADrone_PlayerCompanionParent_C::CompanionOnCausedAnyDamage__DelegateSignature(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "CompanionOnCausedAnyDamage__DelegateSignature");

	Params::ADrone_PlayerCompanionParent_C_CompanionOnCausedAnyDamage__DelegateSignature_Params Parms{};

	Parms.DamageInstigator = DamageInstigator;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.DamagedActor = DamagedActor;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C.CompanionOnCausedDeath__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*            Damaged                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDeathDetails         Details                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ADrone_PlayerCompanionParent_C::CompanionOnCausedDeath__DelegateSignature(class UDamageComponent* Damaged, struct FCausedDeathDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_PlayerCompanionParent_C", "CompanionOnCausedDeath__DelegateSignature");

	Params::ADrone_PlayerCompanionParent_C_CompanionOnCausedDeath__DelegateSignature_Params Parms{};

	Parms.Damaged = Damaged;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}

}


