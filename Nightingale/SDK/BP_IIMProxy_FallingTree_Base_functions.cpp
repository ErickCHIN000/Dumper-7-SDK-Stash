#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IIMProxy_FallingTree_Base.BP_IIMProxy_FallingTree_Base_C
// (Actor)

class UClass* ABP_IIMProxy_FallingTree_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IIMProxy_FallingTree_Base_C");

	return Clss;
}


// BP_IIMProxy_FallingTree_Base_C BP_IIMProxy_FallingTree_Base.Default__BP_IIMProxy_FallingTree_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_IIMProxy_FallingTree_Base_C* ABP_IIMProxy_FallingTree_Base_C::GetDefaultObj()
{
	static class ABP_IIMProxy_FallingTree_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_IIMProxy_FallingTree_Base_C*>(ABP_IIMProxy_FallingTree_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IIMProxy_FallingTree_Base.BP_IIMProxy_FallingTree_Base_C.CanQueryInteractable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Can_Query                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IIMProxy_FallingTree_Base_C::CanQueryInteractable(bool* Can_Query)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IIMProxy_FallingTree_Base_C", "CanQueryInteractable");

	Params::ABP_IIMProxy_FallingTree_Base_C_CanQueryInteractable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Can_Query != nullptr)
		*Can_Query = Parms.Can_Query;

}


// Function BP_IIMProxy_FallingTree_Base.BP_IIMProxy_FallingTree_Base_C.CanInteractWithActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               InteractAvailable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IIMProxy_FallingTree_Base_C::CanInteractWithActor(class AController* Controller, const struct FInteractionData& InteractionData, bool* InteractAvailable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IIMProxy_FallingTree_Base_C", "CanInteractWithActor");

	Params::ABP_IIMProxy_FallingTree_Base_C_CanInteractWithActor_Params Parms{};

	Parms.Controller = Controller;
	Parms.InteractionData = InteractionData;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractAvailable != nullptr)
		*InteractAvailable = Parms.InteractAvailable;

}


// Function BP_IIMProxy_FallingTree_Base.BP_IIMProxy_FallingTree_Base_C.ReturnMeshToHighlight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// TArray<class UStaticMeshComponent*>StaticMesh_to_Highlight                                          (Parm, OutParm, ContainsInstancedReference)
// TArray<class USkeletalMeshComponent*>SkeletalMesh_to_Highlight                                        (Parm, OutParm, ContainsInstancedReference)
// bool                               Hostile_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            Quality                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IIMProxy_FallingTree_Base_C::ReturnMeshToHighlight(const struct FInteractionData& InteractionData, TArray<class UStaticMeshComponent*>* StaticMesh_to_Highlight, TArray<class USkeletalMeshComponent*>* SkeletalMesh_to_Highlight, bool* Hostile_, enum class EItemQuality* Quality)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IIMProxy_FallingTree_Base_C", "ReturnMeshToHighlight");

	Params::ABP_IIMProxy_FallingTree_Base_C_ReturnMeshToHighlight_Params Parms{};

	Parms.InteractionData = InteractionData;

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


// Function BP_IIMProxy_FallingTree_Base.BP_IIMProxy_FallingTree_Base_C.InteractPressed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IIMProxy_FallingTree_Base_C::InteractPressed(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IIMProxy_FallingTree_Base_C", "InteractPressed");

	Params::ABP_IIMProxy_FallingTree_Base_C_InteractPressed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_IIMProxy_FallingTree_Base.BP_IIMProxy_FallingTree_Base_C.InteractReleased
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IIMProxy_FallingTree_Base_C::InteractReleased(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IIMProxy_FallingTree_Base_C", "InteractReleased");

	Params::ABP_IIMProxy_FallingTree_Base_C_InteractReleased_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_IIMProxy_FallingTree_Base.BP_IIMProxy_FallingTree_Base_C.InteractionRequiresClientOnly
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               RequiresClientAction                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IIMProxy_FallingTree_Base_C::InteractionRequiresClientOnly(class AController* Controller, bool* RequiresClientAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IIMProxy_FallingTree_Base_C", "InteractionRequiresClientOnly");

	Params::ABP_IIMProxy_FallingTree_Base_C_InteractionRequiresClientOnly_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

	if (RequiresClientAction != nullptr)
		*RequiresClientAction = Parms.RequiresClientAction;

}


// Function BP_IIMProxy_FallingTree_Base.BP_IIMProxy_FallingTree_Base_C.GetInteractText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class FString                      InteractText                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void ABP_IIMProxy_FallingTree_Base_C::GetInteractText(const struct FInteractionData& InteractionData, class FString* InteractText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IIMProxy_FallingTree_Base_C", "GetInteractText");

	Params::ABP_IIMProxy_FallingTree_Base_C_GetInteractText_Params Parms{};

	Parms.InteractionData = InteractionData;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractText != nullptr)
		*InteractText = std::move(Parms.InteractText);

}


// Function BP_IIMProxy_FallingTree_Base.BP_IIMProxy_FallingTree_Base_C.GetInteractIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// TSoftObjectPtr<class UTexture2D>   Icon                                                             (Parm, OutParm, HasGetValueTypeHash)

void ABP_IIMProxy_FallingTree_Base_C::GetInteractIcon(const struct FInteractionData& InteractionData, TSoftObjectPtr<class UTexture2D>* Icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IIMProxy_FallingTree_Base_C", "GetInteractIcon");

	Params::ABP_IIMProxy_FallingTree_Base_C_GetInteractIcon_Params Parms{};

	Parms.InteractionData = InteractionData;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;

}


// Function BP_IIMProxy_FallingTree_Base.BP_IIMProxy_FallingTree_Base_C.IsHarvestable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FInteractionData            Interaction                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               IsHarvestable                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IIMProxy_FallingTree_Base_C::IsHarvestable(const struct FInteractionData& Interaction, bool* IsHarvestable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IIMProxy_FallingTree_Base_C", "IsHarvestable");

	Params::ABP_IIMProxy_FallingTree_Base_C_IsHarvestable_Params Parms{};

	Parms.Interaction = Interaction;

	UObject::ProcessEvent(Func, &Parms);

	if (IsHarvestable != nullptr)
		*IsHarvestable = Parms.IsHarvestable;

}


// Function BP_IIMProxy_FallingTree_Base.BP_IIMProxy_FallingTree_Base_C.DoesHaveResourceType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              HitId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EResourceType           DesiredResourceType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bHasResourceType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EResourceType           ResourceType                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IIMProxy_FallingTree_Base_C::DoesHaveResourceType(int32 HitId, enum class EResourceType DesiredResourceType, bool* bHasResourceType, enum class EResourceType ResourceType, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IIMProxy_FallingTree_Base_C", "DoesHaveResourceType");

	Params::ABP_IIMProxy_FallingTree_Base_C_DoesHaveResourceType_Params Parms{};

	Parms.HitId = HitId;
	Parms.DesiredResourceType = DesiredResourceType;
	Parms.ResourceType = ResourceType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bHasResourceType != nullptr)
		*bHasResourceType = Parms.bHasResourceType;

}


// Function BP_IIMProxy_FallingTree_Base.BP_IIMProxy_FallingTree_Base_C.IsInteractionDisabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               bIsDisabled                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      DisabledText                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void ABP_IIMProxy_FallingTree_Base_C::IsInteractionDisabled(class AController* Controller, const struct FInteractionData& InteractionData, bool* bIsDisabled, class FString* DisabledText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IIMProxy_FallingTree_Base_C", "IsInteractionDisabled");

	Params::ABP_IIMProxy_FallingTree_Base_C_IsInteractionDisabled_Params Parms{};

	Parms.Controller = Controller;
	Parms.InteractionData = InteractionData;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsDisabled != nullptr)
		*bIsDisabled = Parms.bIsDisabled;

	if (DisabledText != nullptr)
		*DisabledText = std::move(Parms.DisabledText);

}


// Function BP_IIMProxy_FallingTree_Base.BP_IIMProxy_FallingTree_Base_C.HoldInteractionAvailable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bAvailable                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IIMProxy_FallingTree_Base_C::HoldInteractionAvailable(bool* bAvailable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IIMProxy_FallingTree_Base_C", "HoldInteractionAvailable");

	Params::ABP_IIMProxy_FallingTree_Base_C_HoldInteractionAvailable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bAvailable != nullptr)
		*bAvailable = Parms.bAvailable;

}


// Function BP_IIMProxy_FallingTree_Base.BP_IIMProxy_FallingTree_Base_C.SetTreeAmbienceDataRow
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAmbienceData               CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IIMProxy_FallingTree_Base_C::SetTreeAmbienceDataRow(const struct FAmbienceData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IIMProxy_FallingTree_Base_C", "SetTreeAmbienceDataRow");

	Params::ABP_IIMProxy_FallingTree_Base_C_SetTreeAmbienceDataRow_Params Parms{};

	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IIMProxy_FallingTree_Base.BP_IIMProxy_FallingTree_Base_C.VanishTree
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                CompletionTimer                                                  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_IIMProxy_FallingTree_Base_C::VanishTree(const struct FTimerHandle& CompletionTimer, bool CallFunc_IsServer_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IIMProxy_FallingTree_Base_C", "VanishTree");

	Params::ABP_IIMProxy_FallingTree_Base_C_VanishTree_Params Parms{};

	Parms.CompletionTimer = CompletionTimer;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IIMProxy_FallingTree_Base.BP_IIMProxy_FallingTree_Base_C.ScheduleCallToOnVanish
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TimeToDelayVanish                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IIMProxy_FallingTree_Base_C::ScheduleCallToOnVanish(double TimeToDelayVanish, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IIMProxy_FallingTree_Base_C", "ScheduleCallToOnVanish");

	Params::ABP_IIMProxy_FallingTree_Base_C_ScheduleCallToOnVanish_Params Parms{};

	Parms.TimeToDelayVanish = TimeToDelayVanish;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IIMProxy_FallingTree_Base.BP_IIMProxy_FallingTree_Base_C.TrySpawnTreeVanishingEffects
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>             SpherePoints                                                     (Edit, BlueprintVisible)
// bool                               DrawDebug                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IIMProxy_FallingTree_Base_C::TrySpawnTreeVanishingEffects(const TArray<struct FVector>& SpherePoints, bool DrawDebug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IIMProxy_FallingTree_Base_C", "TrySpawnTreeVanishingEffects");

	Params::ABP_IIMProxy_FallingTree_Base_C_TrySpawnTreeVanishingEffects_Params Parms{};

	Parms.SpherePoints = SpherePoints;
	Parms.DrawDebug = DrawDebug;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IIMProxy_FallingTree_Base.BP_IIMProxy_FallingTree_Base_C.SpawnTreeCanopyLeaves
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TreeCanopyLeavesSpawnRateScale                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TimeToDelayDeactivatingLeaves                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCanopyBoundsScaled_OutFullExtent                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCanopyBoundsScaled_OutCenter                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NVFX_SpawnSystem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCanopyBoundsScaled_MaximumExtentMultiplier_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCanopyBoundsScaled_MinimumExtentMultiplier_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AdvanceSimulation_TickDeltaSeconds_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IIMProxy_FallingTree_Base_C::SpawnTreeCanopyLeaves(double TreeCanopyLeavesSpawnRateScale, double TimeToDelayDeactivatingLeaves, const struct FVector& CallFunc_GetCanopyBoundsScaled_OutFullExtent, const struct FVector& CallFunc_GetCanopyBoundsScaled_OutCenter, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, bool CallFunc_NVFX_SpawnSystem_ReturnValue, class UNiagaraComponent* CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_GetCanopyBoundsScaled_MaximumExtentMultiplier_ImplicitCast, float CallFunc_GetCanopyBoundsScaled_MinimumExtentMultiplier_ImplicitCast, float CallFunc_AdvanceSimulation_TickDeltaSeconds_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IIMProxy_FallingTree_Base_C", "SpawnTreeCanopyLeaves");

	Params::ABP_IIMProxy_FallingTree_Base_C_SpawnTreeCanopyLeaves_Params Parms{};

	Parms.TreeCanopyLeavesSpawnRateScale = TreeCanopyLeavesSpawnRateScale;
	Parms.TimeToDelayDeactivatingLeaves = TimeToDelayDeactivatingLeaves;
	Parms.CallFunc_GetCanopyBoundsScaled_OutFullExtent = CallFunc_GetCanopyBoundsScaled_OutFullExtent;
	Parms.CallFunc_GetCanopyBoundsScaled_OutCenter = CallFunc_GetCanopyBoundsScaled_OutCenter;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_NVFX_SpawnSystem_ReturnValue = CallFunc_NVFX_SpawnSystem_ReturnValue;
	Parms.CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned = CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast = CallFunc_SetFloatParameter_Param_ImplicitCast;
	Parms.CallFunc_GetCanopyBoundsScaled_MaximumExtentMultiplier_ImplicitCast = CallFunc_GetCanopyBoundsScaled_MaximumExtentMultiplier_ImplicitCast;
	Parms.CallFunc_GetCanopyBoundsScaled_MinimumExtentMultiplier_ImplicitCast = CallFunc_GetCanopyBoundsScaled_MinimumExtentMultiplier_ImplicitCast;
	Parms.CallFunc_AdvanceSimulation_TickDeltaSeconds_ImplicitCast = CallFunc_AdvanceSimulation_TickDeltaSeconds_ImplicitCast;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_1 = CallFunc_SetFloatParameter_Param_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IIMProxy_FallingTree_Base.BP_IIMProxy_FallingTree_Base_C.SpawnTrunkDestructionPoof
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetTrunkCollisionData_OutExtent                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTrunkCollisionData_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NVFX_SpawnSystem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_IIMProxy_FallingTree_Base_C::SpawnTrunkDestructionPoof(const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_GetTrunkCollisionData_OutExtent, const struct FTransform& CallFunc_GetTrunkCollisionData_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_NVFX_SpawnSystem_ReturnValue, class UNiagaraComponent* CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IIMProxy_FallingTree_Base_C", "SpawnTrunkDestructionPoof");

	Params::ABP_IIMProxy_FallingTree_Base_C_SpawnTrunkDestructionPoof_Params Parms{};

	Parms.CallFunc_Conv_DoubleToVector_ReturnValue = CallFunc_Conv_DoubleToVector_ReturnValue;
	Parms.CallFunc_GetTrunkCollisionData_OutExtent = CallFunc_GetTrunkCollisionData_OutExtent;
	Parms.CallFunc_GetTrunkCollisionData_ReturnValue = CallFunc_GetTrunkCollisionData_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_NVFX_SpawnSystem_ReturnValue = CallFunc_NVFX_SpawnSystem_ReturnValue;
	Parms.CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned = CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IIMProxy_FallingTree_Base.BP_IIMProxy_FallingTree_Base_C.ProcessBaseTreeDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Other                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class ANWXCharacter*               K2Node_DynamicCast_AsNWXCharacter                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IIMProxy_FallingTree_Base_C::ProcessBaseTreeDamage(class AActor*& DamageCauser, class AActor* Other, struct FHitResult& Hit, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IIMProxy_FallingTree_Base_C", "ProcessBaseTreeDamage");

	Params::ABP_IIMProxy_FallingTree_Base_C_ProcessBaseTreeDamage_Params Parms{};

	Parms.DamageCauser = DamageCauser;
	Parms.Other = Other;
	Parms.Hit = Hit;
	Parms.K2Node_DynamicCast_AsNWXCharacter = K2Node_DynamicCast_AsNWXCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IIMProxy_FallingTree_Base.BP_IIMProxy_FallingTree_Base_C.ResetCanInflictDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IIMProxy_FallingTree_Base_C::ResetCanInflictDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IIMProxy_FallingTree_Base_C", "ResetCanInflictDamage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IIMProxy_FallingTree_Base.BP_IIMProxy_FallingTree_Base_C.ThrottledDamageGate
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DamageAllowed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IIMProxy_FallingTree_Base_C::ThrottledDamageGate(bool* DamageAllowed, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IIMProxy_FallingTree_Base_C", "ThrottledDamageGate");

	Params::ABP_IIMProxy_FallingTree_Base_C_ThrottledDamageGate_Params Parms{};

	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (DamageAllowed != nullptr)
		*DamageAllowed = Parms.DamageAllowed;

}


// Function BP_IIMProxy_FallingTree_Base.BP_IIMProxy_FallingTree_Base_C.DamagePlayer
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Other                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTagValueContainer          DamageTagValueContainer                                          (Edit, BlueprintVisible)
// struct FGameplayTagContainer       ActorDamageTags                                                  (Edit, BlueprintVisible, DisableEditOnTemplate)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IDamageEventInterface>K2Node_DynamicCast_AsDamage_Event_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetLinearVelocitySquared_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MeleeTag_MeleeTag                                       (NoDestructor, HasGetValueTypeHash)
// struct FS_CreatureKnockbackData    K2Node_MakeStruct_S_CreatureKnockbackData                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayEffectCue>  Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// struct FTagValueContainer          CallFunc_DamageActor_AggregatedDamageTags                        (None)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DamageActor_BaseDamage_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_LaunchSpeedOverride_41_7727544F4971B507765877BA738938E5_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IIMProxy_FallingTree_Base_C::DamagePlayer(class AActor*& Source, class AActor*& Other, struct FHitResult& Hit, const struct FTagValueContainer& DamageTagValueContainer, const struct FGameplayTagContainer& ActorDamageTags, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetLinearVelocitySquared_ReturnValue, const struct FGameplayTag& CallFunc_MeleeTag_MeleeTag, const struct FS_CreatureKnockbackData& K2Node_MakeStruct_S_CreatureKnockbackData, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Set_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<struct FGameplayEffectCue>& Temp_struct_Variable, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, float CallFunc_DamageActor_BaseDamage_ImplicitCast, float K2Node_MakeStruct_LaunchSpeedOverride_41_7727544F4971B507765877BA738938E5_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IIMProxy_FallingTree_Base_C", "DamagePlayer");

	Params::ABP_IIMProxy_FallingTree_Base_C_DamagePlayer_Params Parms{};

	Parms.Source = Source;
	Parms.Other = Other;
	Parms.Hit = Hit;
	Parms.DamageTagValueContainer = DamageTagValueContainer;
	Parms.ActorDamageTags = ActorDamageTags;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.K2Node_DynamicCast_AsDamage_Event_Interface = K2Node_DynamicCast_AsDamage_Event_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetLinearVelocitySquared_ReturnValue = CallFunc_GetLinearVelocitySquared_ReturnValue;
	Parms.CallFunc_MeleeTag_MeleeTag = CallFunc_MeleeTag_MeleeTag;
	Parms.K2Node_MakeStruct_S_CreatureKnockbackData = K2Node_MakeStruct_S_CreatureKnockbackData;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Set_Contains_ReturnValue = CallFunc_Set_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_DamageActor_AggregatedDamageTags = CallFunc_DamageActor_AggregatedDamageTags;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_DamageActor_BaseDamage_ImplicitCast = CallFunc_DamageActor_BaseDamage_ImplicitCast;
	Parms.K2Node_MakeStruct_LaunchSpeedOverride_41_7727544F4971B507765877BA738938E5_ImplicitCast = K2Node_MakeStruct_LaunchSpeedOverride_41_7727544F4971B507765877BA738938E5_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IIMProxy_FallingTree_Base.BP_IIMProxy_FallingTree_Base_C.DamageStructure
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Other                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IDamageEventInterface>K2Node_DynamicCast_AsDamage_Event_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ThrottledDamageGate_DamageAllowed                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTagValueContainer          Temp_struct_Variable_1                                           (ConstParm)
// TArray<struct FGameplayEffectCue>  Temp_struct_Variable_2                                           (ConstParm, ReferenceParm)
// struct FTagValueContainer          CallFunc_DamageActor_AggregatedDamageTags                        (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DamageActor_BaseDamage_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IIMProxy_FallingTree_Base_C::DamageStructure(class AActor*& Source, class AActor*& Other, struct FHitResult& Hit, const struct FGameplayTag& Temp_struct_Variable, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_ThrottledDamageGate_DamageAllowed, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FTagValueContainer& Temp_struct_Variable_1, TArray<struct FGameplayEffectCue>& Temp_struct_Variable_2, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags, bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_DamageActor_BaseDamage_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IIMProxy_FallingTree_Base_C", "DamageStructure");

	Params::ABP_IIMProxy_FallingTree_Base_C_DamageStructure_Params Parms{};

	Parms.Source = Source;
	Parms.Other = Other;
	Parms.Hit = Hit;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_DynamicCast_AsDamage_Event_Interface = K2Node_DynamicCast_AsDamage_Event_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_ThrottledDamageGate_DamageAllowed = CallFunc_ThrottledDamageGate_DamageAllowed;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_DamageActor_AggregatedDamageTags = CallFunc_DamageActor_AggregatedDamageTags;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_DamageActor_BaseDamage_ImplicitCast = CallFunc_DamageActor_BaseDamage_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IIMProxy_FallingTree_Base.BP_IIMProxy_FallingTree_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetCurrentRealmPower_RealmPower                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentRealmPower_RealmPower_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IIMProxy_FallingTree_Base_C::UserConstructionScript(int32 CallFunc_GetCurrentRealmPower_RealmPower, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_GetCurrentRealmPower_RealmPower_1, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IIMProxy_FallingTree_Base_C", "UserConstructionScript");

	Params::ABP_IIMProxy_FallingTree_Base_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GetCurrentRealmPower_RealmPower = CallFunc_GetCurrentRealmPower_RealmPower;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_GetCurrentRealmPower_RealmPower_1 = CallFunc_GetCurrentRealmPower_RealmPower_1;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_1 = CallFunc_GetFloatValue_InTime_ImplicitCast_1;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IIMProxy_FallingTree_Base.BP_IIMProxy_FallingTree_Base_C.PerformClientSideInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_IIMProxy_FallingTree_Base_C::PerformClientSideInteraction(class AController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IIMProxy_FallingTree_Base_C", "PerformClientSideInteraction");

	Params::ABP_IIMProxy_FallingTree_Base_C_PerformClientSideInteraction_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IIMProxy_FallingTree_Base.BP_IIMProxy_FallingTree_Base_C.ExecuteUbergraph_BP_IIMProxy_FallingTree_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_Controller                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_IIMProxy_FallingTree_Base_C::ExecuteUbergraph_BP_IIMProxy_FallingTree_Base(int32 EntryPoint, class AController* K2Node_Event_Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IIMProxy_FallingTree_Base_C", "ExecuteUbergraph_BP_IIMProxy_FallingTree_Base");

	Params::ABP_IIMProxy_FallingTree_Base_C_ExecuteUbergraph_BP_IIMProxy_FallingTree_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Controller = K2Node_Event_Controller;

	UObject::ProcessEvent(Func, &Parms);

}

}


