#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MirageComponent.MirageComponent_C
// (None)

class UClass* UMirageComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirageComponent_C");

	return Clss;
}


// MirageComponent_C MirageComponent.Default__MirageComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMirageComponent_C* UMirageComponent_C::GetDefaultObj()
{
	static class UMirageComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirageComponent_C*>(UMirageComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MirageComponent.MirageComponent_C.SpawnMirageBP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class ATTLAIController>MirageController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               TriggeredLeft                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               TriggeredRight                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Femto                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SpawnMirage_SuccessMirage                               (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UMirageComponent_C::SpawnMirageBP(TSubclassOf<class ATTLAIController> MirageController, bool TriggeredLeft, bool TriggeredRight, float Femto, bool CallFunc_SpawnMirage_SuccessMirage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirageComponent_C", "SpawnMirageBP");

	Params::UMirageComponent_C_SpawnMirageBP_Params Parms{};

	Parms.MirageController = MirageController;
	Parms.TriggeredLeft = TriggeredLeft;
	Parms.TriggeredRight = TriggeredRight;
	Parms.Femto = Femto;
	Parms.CallFunc_SpawnMirage_SuccessMirage = CallFunc_SpawnMirage_SuccessMirage;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MirageComponent.MirageComponent_C.InitializeBP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMirageComponent_C::InitializeBP(class ACharacter* Character, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirageComponent_C", "InitializeBP");

	Params::UMirageComponent_C_InitializeBP_Params Parms{};

	Parms.Character = Character;
	Parms.K2Node_DynamicCast_AsArsenal_Character = K2Node_DynamicCast_AsArsenal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MirageComponent.MirageComponent_C.spawnMirage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      MirageController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               TriggeredLeft                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               TriggeredRight                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Femto                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SuccessMirage                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanMirage_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMirageComponent_C::SpawnMirage(class UClass* MirageController, bool TriggeredLeft, bool TriggeredRight, float Femto, bool* SuccessMirage, bool CallFunc_CanMirage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirageComponent_C", "spawnMirage");

	Params::UMirageComponent_C_SpawnMirage_Params Parms{};

	Parms.MirageController = MirageController;
	Parms.TriggeredLeft = TriggeredLeft;
	Parms.TriggeredRight = TriggeredRight;
	Parms.Femto = Femto;
	Parms.CallFunc_CanMirage_ReturnValue = CallFunc_CanMirage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SuccessMirage != nullptr)
		*SuccessMirage = Parms.SuccessMirage;

}


// Function MirageComponent.MirageComponent_C.ServerSpawnMirage
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      MirageController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ToggledLeft                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ToggledRight                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Femto                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMirageComponent_C::ServerSpawnMirage(class UClass* MirageController, bool ToggledLeft, bool ToggledRight, float Femto)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirageComponent_C", "ServerSpawnMirage");

	Params::UMirageComponent_C_ServerSpawnMirage_Params Parms{};

	Parms.MirageController = MirageController;
	Parms.ToggledLeft = ToggledLeft;
	Parms.ToggledRight = ToggledRight;
	Parms.Femto = Femto;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MirageComponent.MirageComponent_C.MulticastSpawnMirage
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Femto                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMirageComponent_C::MulticastSpawnMirage(float Femto)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirageComponent_C", "MulticastSpawnMirage");

	Params::UMirageComponent_C_MulticastSpawnMirage_Params Parms{};

	Parms.Femto = Femto;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MirageComponent.MirageComponent_C.ProcessSpawn
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ControllerIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMirageComponent_C::ProcessSpawn(int32 ControllerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirageComponent_C", "ProcessSpawn");

	Params::UMirageComponent_C_ProcessSpawn_Params Parms{};

	Parms.ControllerIndex = ControllerIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MirageComponent.MirageComponent_C.ExecuteUbergraph_MirageComponent
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// struct FTTLArsenalPartsInfoList    CallFunc_GetCurrentArsenalPartsList_OutArsenalPartsInfoList      (HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentArsenalPartsList_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMirageCharacter_C*          CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLArsenalPartsInfoList    K2Node_Select_Default                                            (HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_MirageController                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ToggledLeft                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_ToggledRight                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_femto1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBasicStatusComponent_C*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_femto                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue1                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLAIController*            CallFunc_FinishSpawningActor_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOldMirageTemplate_C*        K2Node_DynamicCast_AsOld_Mirage_Template                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_ControllerIndex                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLAIController*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMirageComponent_C::ExecuteUbergraph_MirageComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, bool Temp_bool_Variable, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FTTLArsenalPartsInfoList& CallFunc_GetCurrentArsenalPartsList_OutArsenalPartsInfoList, bool CallFunc_GetCurrentArsenalPartsList_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AMirageCharacter_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FTTLArsenalPartsInfoList& K2Node_Select_Default, class UClass* K2Node_CustomEvent_MirageController, bool K2Node_CustomEvent_ToggledLeft, bool K2Node_CustomEvent_ToggledRight, float K2Node_CustomEvent_femto1, class UBasicStatusComponent_C* CallFunc_GetComponentByClass_ReturnValue, float K2Node_CustomEvent_femto, const struct FTransform& CallFunc_GetTransform_ReturnValue1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1, class ATTLAIController* CallFunc_FinishSpawningActor_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1, class AOldMirageTemplate_C* K2Node_DynamicCast_AsOld_Mirage_Template, bool K2Node_DynamicCast_bSuccess1, int32 K2Node_Event_ControllerIndex, int32 CallFunc_Array_Add_ReturnValue2, class ATTLAIController* CallFunc_Array_Get_Item, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirageComponent_C", "ExecuteUbergraph_MirageComponent");

	Params::UMirageComponent_C_ExecuteUbergraph_MirageComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsArsenal_Character = K2Node_DynamicCast_AsArsenal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetCurrentArsenalPartsList_OutArsenalPartsInfoList = CallFunc_GetCurrentArsenalPartsList_OutArsenalPartsInfoList;
	Parms.CallFunc_GetCurrentArsenalPartsList_ReturnValue = CallFunc_GetCurrentArsenalPartsList_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_MirageController = K2Node_CustomEvent_MirageController;
	Parms.K2Node_CustomEvent_ToggledLeft = K2Node_CustomEvent_ToggledLeft;
	Parms.K2Node_CustomEvent_ToggledRight = K2Node_CustomEvent_ToggledRight;
	Parms.K2Node_CustomEvent_femto1 = K2Node_CustomEvent_femto1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_CustomEvent_femto = K2Node_CustomEvent_femto;
	Parms.CallFunc_GetTransform_ReturnValue1 = CallFunc_GetTransform_ReturnValue1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue1 = CallFunc_FinishSpawningActor_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue1 = CallFunc_Array_Add_ReturnValue1;
	Parms.K2Node_DynamicCast_AsOld_Mirage_Template = K2Node_DynamicCast_AsOld_Mirage_Template;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_Event_ControllerIndex = K2Node_Event_ControllerIndex;
	Parms.CallFunc_Array_Add_ReturnValue2 = CallFunc_Array_Add_ReturnValue2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;

	UObject::ProcessEvent(Func, &Parms);

}

}


