#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PartBase.BP_PartBase_C
// (Actor)

class UClass* ABP_PartBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PartBase_C");

	return Clss;
}


// BP_PartBase_C BP_PartBase.Default__BP_PartBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PartBase_C* ABP_PartBase_C::GetDefaultObj()
{
	static class ABP_PartBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PartBase_C*>(ABP_PartBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PartBase.BP_PartBase_C.Update Fmod Dropship State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDropshipDescentStateFMODParamDropshipSequenceState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PartBase_C::Update_Fmod_Dropship_State(enum class EDropshipDescentStateFMODParam DropshipSequenceState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartBase_C", "Update Fmod Dropship State");

	Params::ABP_PartBase_C_Update_Fmod_Dropship_State_Params Parms{};

	Parms.DropshipSequenceState = DropshipSequenceState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartBase.BP_PartBase_C.ToggleFlightSFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERocketState            DropShipState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLocalPlayer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PartBase_C::ToggleFlightSFX(enum class ERocketState DropShipState, bool IsLocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartBase_C", "ToggleFlightSFX");

	Params::ABP_PartBase_C_ToggleFlightSFX_Params Parms{};

	Parms.DropShipState = DropShipState;
	Parms.IsLocalPlayer = IsLocalPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartBase.BP_PartBase_C.AssembledByDatabase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PartBase_C::AssembledByDatabase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartBase_C", "AssembledByDatabase");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PartBase.BP_PartBase_C.OnRep_Collision
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         CallFunc_GetMesh_Mesh                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PartBase_C::OnRep_Collision(class UPrimitiveComponent* CallFunc_GetMesh_Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartBase_C", "OnRep_Collision");

	Params::ABP_PartBase_C_OnRep_Collision_Params Parms{};

	Parms.CallFunc_GetMesh_Mesh = CallFunc_GetMesh_Mesh;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartBase.BP_PartBase_C.OnRep_SyncedTransform
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  CallFunc_K2_SetActorRelativeTransform_SweepHitResult             (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_PartBase_C::OnRep_SyncedTransform(const struct FHitResult& CallFunc_K2_SetActorRelativeTransform_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartBase_C", "OnRep_SyncedTransform");

	Params::ABP_PartBase_C_OnRep_SyncedTransform_Params Parms{};

	Parms.CallFunc_K2_SetActorRelativeTransform_SweepHitResult = CallFunc_K2_SetActorRelativeTransform_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartBase.BP_PartBase_C.ReadyCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PartBase_C::ReadyCheck(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartBase_C", "ReadyCheck");

	Params::ABP_PartBase_C_ReadyCheck_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_PartBase.BP_PartBase_C.TriggerEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDropShipActionsEnum        Actions                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PartBase_C::TriggerEvent(const struct FDropShipActionsEnum& Actions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartBase_C", "TriggerEvent");

	Params::ABP_PartBase_C_TriggerEvent_Params Parms{};

	Parms.Actions = Actions;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartBase.BP_PartBase_C.GetMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*         Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PartBase_C::GetMesh(class UPrimitiveComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartBase_C", "GetMesh");

	Params::ABP_PartBase_C_GetMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}


// Function BP_PartBase.BP_PartBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PartBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartBase_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PartBase.BP_PartBase_C.SetEditorHighlight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Highlight                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PartBase_C::SetEditorHighlight(bool Highlight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartBase_C", "SetEditorHighlight");

	Params::ABP_PartBase_C_SetEditorHighlight_Params Parms{};

	Parms.Highlight = Highlight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartBase.BP_PartBase_C.SetEditorInteractable
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Interactable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PartBase_C::SetEditorInteractable(bool Interactable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartBase_C", "SetEditorInteractable");

	Params::ABP_PartBase_C_SetEditorInteractable_Params Parms{};

	Parms.Interactable = Interactable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartBase.BP_PartBase_C.Enable Interactable Collision
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PartBase_C::Enable_Interactable_Collision()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartBase_C", "Enable Interactable Collision");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PartBase.BP_PartBase_C.OnHighlightChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHighlightableComponent*     Highlightable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bHighlighted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PartBase_C::OnHighlightChanged(class UHighlightableComponent* Highlightable, class UPrimitiveComponent* Component, bool bHighlighted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartBase_C", "OnHighlightChanged");

	Params::ABP_PartBase_C_OnHighlightChanged_Params Parms{};

	Parms.Highlightable = Highlightable;
	Parms.Component = Component;
	Parms.bHighlighted = bHighlighted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartBase.BP_PartBase_C.Multi_PlayAnimation
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMesh                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimationAsset*             Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StartingPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Reverse                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PartBase_C::Multi_PlayAnimation(class USkeletalMeshComponent* SkeletalMesh, class UAnimationAsset* Animation, float StartingPosition, bool Reverse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartBase_C", "Multi_PlayAnimation");

	Params::ABP_PartBase_C_Multi_PlayAnimation_Params Parms{};

	Parms.SkeletalMesh = SkeletalMesh;
	Parms.Animation = Animation;
	Parms.StartingPosition = StartingPosition;
	Parms.Reverse = Reverse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartBase.BP_PartBase_C.Debug_PrintTransformLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PartBase_C::Debug_PrintTransformLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartBase_C", "Debug_PrintTransformLocation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PartBase.BP_PartBase_C.ExecuteUbergraph_BP_PartBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Highlight                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_RotatorToString_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Interactable                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHighlightableComponent*     K2Node_CustomEvent_Highlightable                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_Component                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bHighlighted                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHighlightableComponent*     CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      K2Node_CustomEvent_SkeletalMesh                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimationAsset*             K2Node_CustomEvent_Animation                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_StartingPosition                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Reverse                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         CallFunc_GetMesh_Mesh                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_RotatorToString_ReturnValue_1                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void ABP_PartBase_C::ExecuteUbergraph_BP_PartBase(int32 EntryPoint, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool K2Node_Event_Highlight, const class FString& CallFunc_Conv_RotatorToString_ReturnValue, bool K2Node_Event_Interactable, class UHighlightableComponent* K2Node_CustomEvent_Highlightable, class UPrimitiveComponent* K2Node_CustomEvent_Component, bool K2Node_CustomEvent_bHighlighted, enum class EValid CallFunc_GetTrait_Paths, class UHighlightableComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class USkeletalMeshComponent* K2Node_CustomEvent_SkeletalMesh, class UAnimationAsset* K2Node_CustomEvent_Animation, float K2Node_CustomEvent_StartingPosition, bool K2Node_CustomEvent_Reverse, class UPrimitiveComponent* CallFunc_GetMesh_Mesh, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const class FString& CallFunc_Conv_RotatorToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartBase_C", "ExecuteUbergraph_BP_PartBase");

	Params::ABP_PartBase_C_ExecuteUbergraph_BP_PartBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.K2Node_Event_Highlight = K2Node_Event_Highlight;
	Parms.CallFunc_Conv_RotatorToString_ReturnValue = CallFunc_Conv_RotatorToString_ReturnValue;
	Parms.K2Node_Event_Interactable = K2Node_Event_Interactable;
	Parms.K2Node_CustomEvent_Highlightable = K2Node_CustomEvent_Highlightable;
	Parms.K2Node_CustomEvent_Component = K2Node_CustomEvent_Component;
	Parms.K2Node_CustomEvent_bHighlighted = K2Node_CustomEvent_bHighlighted;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_SkeletalMesh = K2Node_CustomEvent_SkeletalMesh;
	Parms.K2Node_CustomEvent_Animation = K2Node_CustomEvent_Animation;
	Parms.K2Node_CustomEvent_StartingPosition = K2Node_CustomEvent_StartingPosition;
	Parms.K2Node_CustomEvent_Reverse = K2Node_CustomEvent_Reverse;
	Parms.CallFunc_GetMesh_Mesh = CallFunc_GetMesh_Mesh;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Conv_RotatorToString_ReturnValue_1 = CallFunc_Conv_RotatorToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


