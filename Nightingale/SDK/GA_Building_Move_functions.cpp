#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Building_Move.GA_Building_Move_C
// (None)

class UClass* UGA_Building_Move_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Building_Move_C");

	return Clss;
}


// GA_Building_Move_C GA_Building_Move.Default__GA_Building_Move_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Building_Move_C* UGA_Building_Move_C::GetDefaultObj()
{
	static class UGA_Building_Move_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Building_Move_C*>(UGA_Building_Move_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Building_Move.GA_Building_Move_C.OnCopyCancelled
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EBuildingFeedback       FeedbackId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Move_C::OnCopyCancelled(enum class EBuildingFeedback FeedbackId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Move_C", "OnCopyCancelled");

	Params::UGA_Building_Move_C_OnCopyCancelled_Params Parms{};

	Parms.FeedbackId = FeedbackId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Move.GA_Building_Move_C.OnCopyConfirmed
// (Event, Public, BlueprintEvent)
// Parameters:

void UGA_Building_Move_C::OnCopyConfirmed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Move_C", "OnCopyConfirmed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Building_Move.GA_Building_Move_C.OnDeconstructCancelled
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EBuildingFeedback       FeedbackId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Move_C::OnDeconstructCancelled(enum class EBuildingFeedback FeedbackId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Move_C", "OnDeconstructCancelled");

	Params::UGA_Building_Move_C_OnDeconstructCancelled_Params Parms{};

	Parms.FeedbackId = FeedbackId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Move.GA_Building_Move_C.OnDeconstructConfirmed
// (Event, Public, BlueprintEvent)
// Parameters:

void UGA_Building_Move_C::OnDeconstructConfirmed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Move_C", "OnDeconstructConfirmed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Building_Move.GA_Building_Move_C.OnEndBuilding
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EBuildingFeedback       FeedbackId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Move_C::OnEndBuilding(enum class EBuildingFeedback FeedbackId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Move_C", "OnEndBuilding");

	Params::UGA_Building_Move_C_OnEndBuilding_Params Parms{};

	Parms.FeedbackId = FeedbackId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Move.GA_Building_Move_C.OnMovementConfirmed
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     MovingStructure                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Move_C::OnMovementConfirmed(class UObject* MovingStructure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Move_C", "OnMovementConfirmed");

	Params::UGA_Building_Move_C_OnMovementConfirmed_Params Parms{};

	Parms.MovingStructure = MovingStructure;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Move.GA_Building_Move_C.OnPlacePreviewStructure
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FStructureAssetReference    StructureReference                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               IgnoreStructureBudgets                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Move_C::OnPlacePreviewStructure(struct FGameplayAbilityTargetDataHandle& TargetData, struct FStructureAssetReference& StructureReference, bool IgnoreStructureBudgets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Move_C", "OnPlacePreviewStructure");

	Params::UGA_Building_Move_C_OnPlacePreviewStructure_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.StructureReference = StructureReference;
	Parms.IgnoreStructureBudgets = IgnoreStructureBudgets;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Move.GA_Building_Move_C.OnStartBuilding
// (Event, Public, BlueprintEvent)
// Parameters:

void UGA_Building_Move_C::OnStartBuilding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Move_C", "OnStartBuilding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Building_Move.GA_Building_Move_C.OnStartCopy
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Move_C::OnStartCopy(class UObject* Structure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Move_C", "OnStartCopy");

	Params::UGA_Building_Move_C_OnStartCopy_Params Parms{};

	Parms.Structure = Structure;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Move.GA_Building_Move_C.OnStartDeconstruct
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Move_C::OnStartDeconstruct(class UObject* Structure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Move_C", "OnStartDeconstruct");

	Params::UGA_Building_Move_C_OnStartDeconstruct_Params Parms{};

	Parms.Structure = Structure;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Move.GA_Building_Move_C.OnStartPlacing
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FStructureAssetReference    StructureReference                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UGA_Building_Move_C::OnStartPlacing(struct FStructureAssetReference& StructureReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Move_C", "OnStartPlacing");

	Params::UGA_Building_Move_C_OnStartPlacing_Params Parms{};

	Parms.StructureReference = StructureReference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Move.GA_Building_Move_C.OnStructureDeconstructed
// (Event, Public, BlueprintEvent)
// Parameters:

void UGA_Building_Move_C::OnStructureDeconstructed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Move_C", "OnStructureDeconstructed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Building_Move.GA_Building_Move_C.ServerOnly_OnSpawnStructure
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FStructureAssetReference    StructureReference                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               IgnoreStructureBudgets                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Move_C::ServerOnly_OnSpawnStructure(struct FGameplayAbilityTargetDataHandle& TargetData, struct FStructureAssetReference& StructureReference, bool IgnoreStructureBudgets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Move_C", "ServerOnly_OnSpawnStructure");

	Params::UGA_Building_Move_C_ServerOnly_OnSpawnStructure_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.StructureReference = StructureReference;
	Parms.IgnoreStructureBudgets = IgnoreStructureBudgets;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Move.GA_Building_Move_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Move_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Move_C", "K2_OnEndAbility");

	Params::UGA_Building_Move_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Move.GA_Building_Move_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Building_Move_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Move_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Building_Move.GA_Building_Move_C.OnPlacementConfirmed
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bRefire                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Move_C::OnPlacementConfirmed(bool bRefire)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Move_C", "OnPlacementConfirmed");

	Params::UGA_Building_Move_C_OnPlacementConfirmed_Params Parms{};

	Parms.bRefire = bRefire;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Move.GA_Building_Move_C.OnPlacementCancelled
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FStructureAssetReference    StructureReference                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// enum class EBuildingFeedback       FeedbackId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Move_C::OnPlacementCancelled(struct FStructureAssetReference& StructureReference, enum class EBuildingFeedback FeedbackId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Move_C", "OnPlacementCancelled");

	Params::UGA_Building_Move_C_OnPlacementCancelled_Params Parms{};

	Parms.StructureReference = StructureReference;
	Parms.FeedbackId = FeedbackId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Move.GA_Building_Move_C.OnStructureSpawned
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     SpawnedStructure                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Move_C::OnStructureSpawned(class UObject* SpawnedStructure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Move_C", "OnStructureSpawned");

	Params::UGA_Building_Move_C_OnStructureSpawned_Params Parms{};

	Parms.SpawnedStructure = SpawnedStructure;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Move.GA_Building_Move_C.OnStartMovement
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Move_C::OnStartMovement(class UObject* Structure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Move_C", "OnStartMovement");

	Params::UGA_Building_Move_C_OnStartMovement_Params Parms{};

	Parms.Structure = Structure;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Move.GA_Building_Move_C.OnMovementCancelled
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     MovingStructure                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EBuildingFeedback       FeedbackId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Move_C::OnMovementCancelled(class UObject* MovingStructure, enum class EBuildingFeedback FeedbackId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Move_C", "OnMovementCancelled");

	Params::UGA_Building_Move_C_OnMovementCancelled_Params Parms{};

	Parms.MovingStructure = MovingStructure;
	Parms.FeedbackId = FeedbackId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Move.GA_Building_Move_C.ExecuteUbergraph_GA_Building_Move
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildingFeedback       K2Node_Event_FeedbackId_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildingFeedback       K2Node_Event_FeedbackId_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildingFeedback       K2Node_Event_FeedbackId_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_MovingStructure_1                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_Event_TargetData_1                                        (ConstParm)
// struct FStructureAssetReference    K2Node_Event_StructureReference_3                                (ConstParm, HasGetValueTypeHash)
// bool                               K2Node_Event_IgnoreStructureBudgets_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_Structure_2                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_Structure_1                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStructureAssetReference    K2Node_Event_StructureReference_2                                (ConstParm, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_Event_TargetData                                          (ConstParm)
// struct FStructureAssetReference    K2Node_Event_StructureReference_1                                (ConstParm, HasGetValueTypeHash)
// bool                               K2Node_Event_IgnoreStructureBudgets                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureDataProviderInterface>K2Node_DynamicCast_AsStructure_Data_Provider_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetStructureAssetReference_IsValid                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureAssetReference    CallFunc_GetStructureAssetReference_OutStructureReference        (HasGetValueTypeHash)
// TScriptInterface<class IBuildingInterface>K2Node_DynamicCast_AsBuilding_Interface                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBuildingInterface>K2Node_DynamicCast_AsBuilding_Interface_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBuildingInterface>K2Node_DynamicCast_AsBuilding_Interface_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetActivatingController_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetActivatingController_ReturnValue_1                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBuildingInterface>K2Node_DynamicCast_AsBuilding_Interface_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bRefire                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBuildingEventInterface>CallFunc_AddBuildingEventListener_Listener_CastInput             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FStructureAssetReference    K2Node_Event_StructureReference                                  (ConstParm, HasGetValueTypeHash)
// enum class EBuildingFeedback       K2Node_Event_FeedbackId_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_SpawnedStructure                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_Structure                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_MovingStructure                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EBuildingFeedback       K2Node_Event_FeedbackId                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBuildingInterface>K2Node_DynamicCast_AsBuilding_Interface_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBuildingEventInterface>CallFunc_RemoveBuildingEventListener_Listener_CastInput          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UGA_Building_Move_C::ExecuteUbergraph_GA_Building_Move(int32 EntryPoint, TSubclassOf<class IInterface> Temp_class_Variable, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, enum class EBuildingFeedback K2Node_Event_FeedbackId_4, enum class EBuildingFeedback K2Node_Event_FeedbackId_3, enum class EBuildingFeedback K2Node_Event_FeedbackId_2, class UObject* K2Node_Event_MovingStructure_1, const struct FGameplayAbilityTargetDataHandle& K2Node_Event_TargetData_1, const struct FStructureAssetReference& K2Node_Event_StructureReference_3, bool K2Node_Event_IgnoreStructureBudgets_1, class UObject* K2Node_Event_Structure_2, class UObject* K2Node_Event_Structure_1, const struct FStructureAssetReference& K2Node_Event_StructureReference_2, const struct FGameplayAbilityTargetDataHandle& K2Node_Event_TargetData, const struct FStructureAssetReference& K2Node_Event_StructureReference_1, bool K2Node_Event_IgnoreStructureBudgets, bool K2Node_Event_bWasCancelled, TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetStructureAssetReference_IsValid, const struct FStructureAssetReference& CallFunc_GetStructureAssetReference_OutStructureReference, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface_1, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_K2_CommitAbility_ReturnValue, class AController* CallFunc_GetActivatingController_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetActivatingController_ReturnValue_1, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface_3, bool K2Node_DynamicCast_bSuccess_4, bool K2Node_Event_bRefire, TScriptInterface<class IBuildingEventInterface> CallFunc_AddBuildingEventListener_Listener_CastInput, const struct FStructureAssetReference& K2Node_Event_StructureReference, enum class EBuildingFeedback K2Node_Event_FeedbackId_1, class UObject* K2Node_Event_SpawnedStructure, class UObject* K2Node_Event_Structure, class UObject* K2Node_Event_MovingStructure, enum class EBuildingFeedback K2Node_Event_FeedbackId, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface_4, bool K2Node_DynamicCast_bSuccess_5, TScriptInterface<class IBuildingEventInterface> CallFunc_RemoveBuildingEventListener_Listener_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Move_C", "ExecuteUbergraph_GA_Building_Move");

	Params::UGA_Building_Move_C_ExecuteUbergraph_GA_Building_Move_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_Event_FeedbackId_4 = K2Node_Event_FeedbackId_4;
	Parms.K2Node_Event_FeedbackId_3 = K2Node_Event_FeedbackId_3;
	Parms.K2Node_Event_FeedbackId_2 = K2Node_Event_FeedbackId_2;
	Parms.K2Node_Event_MovingStructure_1 = K2Node_Event_MovingStructure_1;
	Parms.K2Node_Event_TargetData_1 = K2Node_Event_TargetData_1;
	Parms.K2Node_Event_StructureReference_3 = K2Node_Event_StructureReference_3;
	Parms.K2Node_Event_IgnoreStructureBudgets_1 = K2Node_Event_IgnoreStructureBudgets_1;
	Parms.K2Node_Event_Structure_2 = K2Node_Event_Structure_2;
	Parms.K2Node_Event_Structure_1 = K2Node_Event_Structure_1;
	Parms.K2Node_Event_StructureReference_2 = K2Node_Event_StructureReference_2;
	Parms.K2Node_Event_TargetData = K2Node_Event_TargetData;
	Parms.K2Node_Event_StructureReference_1 = K2Node_Event_StructureReference_1;
	Parms.K2Node_Event_IgnoreStructureBudgets = K2Node_Event_IgnoreStructureBudgets;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_DynamicCast_AsStructure_Data_Provider_Interface = K2Node_DynamicCast_AsStructure_Data_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStructureAssetReference_IsValid = CallFunc_GetStructureAssetReference_IsValid;
	Parms.CallFunc_GetStructureAssetReference_OutStructureReference = CallFunc_GetStructureAssetReference_OutStructureReference;
	Parms.K2Node_DynamicCast_AsBuilding_Interface = K2Node_DynamicCast_AsBuilding_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsBuilding_Interface_1 = K2Node_DynamicCast_AsBuilding_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBuilding_Interface_2 = K2Node_DynamicCast_AsBuilding_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_GetActivatingController_ReturnValue = CallFunc_GetActivatingController_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetActivatingController_ReturnValue_1 = CallFunc_GetActivatingController_ReturnValue_1;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuilding_Interface_3 = K2Node_DynamicCast_AsBuilding_Interface_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_Event_bRefire = K2Node_Event_bRefire;
	Parms.CallFunc_AddBuildingEventListener_Listener_CastInput = CallFunc_AddBuildingEventListener_Listener_CastInput;
	Parms.K2Node_Event_StructureReference = K2Node_Event_StructureReference;
	Parms.K2Node_Event_FeedbackId_1 = K2Node_Event_FeedbackId_1;
	Parms.K2Node_Event_SpawnedStructure = K2Node_Event_SpawnedStructure;
	Parms.K2Node_Event_Structure = K2Node_Event_Structure;
	Parms.K2Node_Event_MovingStructure = K2Node_Event_MovingStructure;
	Parms.K2Node_Event_FeedbackId = K2Node_Event_FeedbackId;
	Parms.K2Node_DynamicCast_AsBuilding_Interface_4 = K2Node_DynamicCast_AsBuilding_Interface_4;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_RemoveBuildingEventListener_Listener_CastInput = CallFunc_RemoveBuildingEventListener_Listener_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}

}


