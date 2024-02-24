#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAR_Creature_IfHaveOwnerTargetOwnerIsTheSame.AIAR_Creature_IfHaveOwnerTargetOwnerIsTheSame_C
// (None)

class UClass* UAIAR_Creature_IfHaveOwnerTargetOwnerIsTheSame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAR_Creature_IfHaveOwnerTargetOwnerIsTheSame_C");

	return Clss;
}


// AIAR_Creature_IfHaveOwnerTargetOwnerIsTheSame_C AIAR_Creature_IfHaveOwnerTargetOwnerIsTheSame.Default__AIAR_Creature_IfHaveOwnerTargetOwnerIsTheSame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAR_Creature_IfHaveOwnerTargetOwnerIsTheSame_C* UAIAR_Creature_IfHaveOwnerTargetOwnerIsTheSame_C::GetDefaultObj()
{
	static class UAIAR_Creature_IfHaveOwnerTargetOwnerIsTheSame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAR_Creature_IfHaveOwnerTargetOwnerIsTheSame_C*>(UAIAR_Creature_IfHaveOwnerTargetOwnerIsTheSame_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAR_Creature_IfHaveOwnerTargetOwnerIsTheSame.AIAR_Creature_IfHaveOwnerTargetOwnerIsTheSame_C.CheckStaticTargetRequirements
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      OwnerPersistentID                                                (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      LTarget                                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IOwnershipInterface>K2Node_DynamicCast_AsOwnership_Interface                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetOwningPlayerPersistentID_ReturnValue                 (ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IOwnershipInterface>K2Node_DynamicCast_AsOwnership_Interface_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetOwningPlayerPersistentID_ReturnValue_1               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IOwnershipAccessInterface>K2Node_DynamicCast_AsOwnership_Access_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOwnershipObject_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IOwnershipAccessInterface>K2Node_DynamicCast_AsOwnership_Access_Interface_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOwnershipObject_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

bool UAIAR_Creature_IfHaveOwnerTargetOwnerIsTheSame_C::CheckStaticTargetRequirements(class AActor* Target, const class FString& OwnerPersistentID, class AActor* LTarget, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, TSubclassOf<class IInterface> Temp_class_Variable, class UObject* Temp_object_Variable, TScriptInterface<class IOwnershipInterface> K2Node_DynamicCast_AsOwnership_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_StrStr_ReturnValue, const class FString& CallFunc_GetOwningPlayerPersistentID_ReturnValue, class UObject* Temp_object_Variable_1, TScriptInterface<class IOwnershipInterface> K2Node_DynamicCast_AsOwnership_Interface_1, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetOwningPlayerPersistentID_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IOwnershipAccessInterface> K2Node_DynamicCast_AsOwnership_Access_Interface, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_DoesImplementInterface_ReturnValue, class UObject* CallFunc_GetOwnershipObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IOwnershipAccessInterface> K2Node_DynamicCast_AsOwnership_Access_Interface_1, bool K2Node_DynamicCast_bSuccess_3, class UObject* CallFunc_GetOwnershipObject_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAR_Creature_IfHaveOwnerTargetOwnerIsTheSame_C", "CheckStaticTargetRequirements");

	Params::UAIAR_Creature_IfHaveOwnerTargetOwnerIsTheSame_C_CheckStaticTargetRequirements_Params Parms{};

	Parms.Target = Target;
	Parms.OwnerPersistentID = OwnerPersistentID;
	Parms.LTarget = LTarget;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsOwnership_Interface = K2Node_DynamicCast_AsOwnership_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPersistentID_ReturnValue = CallFunc_GetOwningPlayerPersistentID_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_DynamicCast_AsOwnership_Interface_1 = K2Node_DynamicCast_AsOwnership_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetOwningPlayerPersistentID_ReturnValue_1 = CallFunc_GetOwningPlayerPersistentID_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;
	Parms.K2Node_DynamicCast_AsOwnership_Access_Interface = K2Node_DynamicCast_AsOwnership_Access_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_GetOwnershipObject_ReturnValue = CallFunc_GetOwnershipObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsOwnership_Access_Interface_1 = K2Node_DynamicCast_AsOwnership_Access_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetOwnershipObject_ReturnValue_1 = CallFunc_GetOwnershipObject_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIAR_Creature_IfHaveOwnerTargetOwnerIsTheSame.AIAR_Creature_IfHaveOwnerTargetOwnerIsTheSame_C.Initialize
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          K2Node_DynamicCast_AsBP_Creature_Base                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               CallFunc_GetOwnerAIController_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AAIC_CreatureBase_C*         K2Node_DynamicCast_AsAIC_Creature_Base                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIAR_Creature_IfHaveOwnerTargetOwnerIsTheSame_C::Initialize(class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, class AAIController* CallFunc_GetOwnerAIController_ReturnValue, class AAIC_CreatureBase_C* K2Node_DynamicCast_AsAIC_Creature_Base, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAR_Creature_IfHaveOwnerTargetOwnerIsTheSame_C", "Initialize");

	Params::UAIAR_Creature_IfHaveOwnerTargetOwnerIsTheSame_C_Initialize_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Creature_Base = K2Node_DynamicCast_AsBP_Creature_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwnerAIController_ReturnValue = CallFunc_GetOwnerAIController_ReturnValue;
	Parms.K2Node_DynamicCast_AsAIC_Creature_Base = K2Node_DynamicCast_AsAIC_Creature_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


