#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TreeTrunkGeom_Base.BP_TreeTrunkGeom_Base_C
// (Actor)

class UClass* ABP_TreeTrunkGeom_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TreeTrunkGeom_Base_C");

	return Clss;
}


// BP_TreeTrunkGeom_Base_C BP_TreeTrunkGeom_Base.Default__BP_TreeTrunkGeom_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TreeTrunkGeom_Base_C* ABP_TreeTrunkGeom_Base_C::GetDefaultObj()
{
	static class ABP_TreeTrunkGeom_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TreeTrunkGeom_Base_C*>(ABP_TreeTrunkGeom_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_TreeTrunkGeom_Base.BP_TreeTrunkGeom_Base_C.CanQueryInteractable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Can_Query                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TreeTrunkGeom_Base_C::CanQueryInteractable(bool* Can_Query)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreeTrunkGeom_Base_C", "CanQueryInteractable");

	Params::ABP_TreeTrunkGeom_Base_C_CanQueryInteractable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Can_Query != nullptr)
		*Can_Query = Parms.Can_Query;

}


// Function BP_TreeTrunkGeom_Base.BP_TreeTrunkGeom_Base_C.HoldInteractionAvailable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bAvailable                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TreeTrunkGeom_Base_C::HoldInteractionAvailable(bool* bAvailable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreeTrunkGeom_Base_C", "HoldInteractionAvailable");

	Params::ABP_TreeTrunkGeom_Base_C_HoldInteractionAvailable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bAvailable != nullptr)
		*bAvailable = Parms.bAvailable;

}


// Function BP_TreeTrunkGeom_Base.BP_TreeTrunkGeom_Base_C.IsInteractionDisabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               bIsDisabled                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      DisabledText                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void ABP_TreeTrunkGeom_Base_C::IsInteractionDisabled(class AController* Controller, const struct FInteractionData& InteractionData, bool* bIsDisabled, class FString* DisabledText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreeTrunkGeom_Base_C", "IsInteractionDisabled");

	Params::ABP_TreeTrunkGeom_Base_C_IsInteractionDisabled_Params Parms{};

	Parms.Controller = Controller;
	Parms.InteractionData = InteractionData;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsDisabled != nullptr)
		*bIsDisabled = Parms.bIsDisabled;

	if (DisabledText != nullptr)
		*DisabledText = std::move(Parms.DisabledText);

}


// Function BP_TreeTrunkGeom_Base.BP_TreeTrunkGeom_Base_C.DoesHaveResourceType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              HitId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EResourceType           DesiredResourceType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bHasResourceType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TreeTrunkGeom_Base_C::DoesHaveResourceType(int32 HitId, enum class EResourceType DesiredResourceType, bool* bHasResourceType, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreeTrunkGeom_Base_C", "DoesHaveResourceType");

	Params::ABP_TreeTrunkGeom_Base_C_DoesHaveResourceType_Params Parms{};

	Parms.HitId = HitId;
	Parms.DesiredResourceType = DesiredResourceType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bHasResourceType != nullptr)
		*bHasResourceType = Parms.bHasResourceType;

}


// Function BP_TreeTrunkGeom_Base.BP_TreeTrunkGeom_Base_C.IsHarvestable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FInteractionData            Interaction                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               IsHarvestable                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TreeTrunkGeom_Base_C::IsHarvestable(const struct FInteractionData& Interaction, bool* IsHarvestable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreeTrunkGeom_Base_C", "IsHarvestable");

	Params::ABP_TreeTrunkGeom_Base_C_IsHarvestable_Params Parms{};

	Parms.Interaction = Interaction;

	UObject::ProcessEvent(Func, &Parms);

	if (IsHarvestable != nullptr)
		*IsHarvestable = Parms.IsHarvestable;

}


// Function BP_TreeTrunkGeom_Base.BP_TreeTrunkGeom_Base_C.GetInteractIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// TSoftObjectPtr<class UTexture2D>   Icon                                                             (Parm, OutParm, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   SoftIcon                                                         (Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetResourceVulnerabilityIcon_ReturnValue                (ConstParm, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TreeTrunkGeom_Base_C::GetInteractIcon(const struct FInteractionData& InteractionData, TSoftObjectPtr<class UTexture2D>* Icon, TSoftObjectPtr<class UTexture2D> SoftIcon, TSoftObjectPtr<class UTexture2D> CallFunc_GetResourceVulnerabilityIcon_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreeTrunkGeom_Base_C", "GetInteractIcon");

	Params::ABP_TreeTrunkGeom_Base_C_GetInteractIcon_Params Parms{};

	Parms.InteractionData = InteractionData;
	Parms.SoftIcon = SoftIcon;
	Parms.CallFunc_GetResourceVulnerabilityIcon_ReturnValue = CallFunc_GetResourceVulnerabilityIcon_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;

}


// Function BP_TreeTrunkGeom_Base.BP_TreeTrunkGeom_Base_C.CanInteractWithActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               InteractAvailable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TreeTrunkGeom_Base_C::CanInteractWithActor(class AController* Controller, const struct FInteractionData& InteractionData, bool* InteractAvailable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreeTrunkGeom_Base_C", "CanInteractWithActor");

	Params::ABP_TreeTrunkGeom_Base_C_CanInteractWithActor_Params Parms{};

	Parms.Controller = Controller;
	Parms.InteractionData = InteractionData;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractAvailable != nullptr)
		*InteractAvailable = Parms.InteractAvailable;

}


// Function BP_TreeTrunkGeom_Base.BP_TreeTrunkGeom_Base_C.ReturnMeshToHighlight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// TArray<class UStaticMeshComponent*>StaticMesh_to_Highlight                                          (Parm, OutParm, ContainsInstancedReference)
// TArray<class USkeletalMeshComponent*>SkeletalMesh_to_Highlight                                        (Parm, OutParm, ContainsInstancedReference)
// bool                               Hostile_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            Quality                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TreeTrunkGeom_Base_C::ReturnMeshToHighlight(const struct FInteractionData& InteractionData, TArray<class UStaticMeshComponent*>* StaticMesh_to_Highlight, TArray<class USkeletalMeshComponent*>* SkeletalMesh_to_Highlight, bool* Hostile_, enum class EItemQuality* Quality)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreeTrunkGeom_Base_C", "ReturnMeshToHighlight");

	Params::ABP_TreeTrunkGeom_Base_C_ReturnMeshToHighlight_Params Parms{};

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


// Function BP_TreeTrunkGeom_Base.BP_TreeTrunkGeom_Base_C.InteractPressed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TreeTrunkGeom_Base_C::InteractPressed(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreeTrunkGeom_Base_C", "InteractPressed");

	Params::ABP_TreeTrunkGeom_Base_C_InteractPressed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_TreeTrunkGeom_Base.BP_TreeTrunkGeom_Base_C.InteractReleased
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TreeTrunkGeom_Base_C::InteractReleased(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreeTrunkGeom_Base_C", "InteractReleased");

	Params::ABP_TreeTrunkGeom_Base_C_InteractReleased_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_TreeTrunkGeom_Base.BP_TreeTrunkGeom_Base_C.InteractionRequiresClientOnly
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               RequiresClientAction                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TreeTrunkGeom_Base_C::InteractionRequiresClientOnly(class AController* Controller, bool* RequiresClientAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreeTrunkGeom_Base_C", "InteractionRequiresClientOnly");

	Params::ABP_TreeTrunkGeom_Base_C_InteractionRequiresClientOnly_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

	if (RequiresClientAction != nullptr)
		*RequiresClientAction = Parms.RequiresClientAction;

}


// Function BP_TreeTrunkGeom_Base.BP_TreeTrunkGeom_Base_C.GetInteractText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class FString                      InteractText                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void ABP_TreeTrunkGeom_Base_C::GetInteractText(const struct FInteractionData& InteractionData, class FString* InteractText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreeTrunkGeom_Base_C", "GetInteractText");

	Params::ABP_TreeTrunkGeom_Base_C_GetInteractText_Params Parms{};

	Parms.InteractionData = InteractionData;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractText != nullptr)
		*InteractText = std::move(Parms.InteractText);

}


// Function BP_TreeTrunkGeom_Base.BP_TreeTrunkGeom_Base_C.ShowDamage
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     DamageLocation                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DamageAmount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_UI_FloatyType         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_UI_FloatyType         Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsFalling_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_UI_FloatyType         K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Create_Damage_Text_InValue_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TreeTrunkGeom_Base_C::ShowDamage(struct FVector& DamageLocation, float DamageAmount, class AActor* DamageSource, enum class E_UI_FloatyType Temp_byte_Variable, bool CallFunc_Greater_DoubleDouble_ReturnValue, enum class E_UI_FloatyType Temp_byte_Variable_1, bool Temp_bool_Variable, bool CallFunc_GetIsFalling_ReturnValue, enum class E_UI_FloatyType K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Create_Damage_Text_InValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreeTrunkGeom_Base_C", "ShowDamage");

	Params::ABP_TreeTrunkGeom_Base_C_ShowDamage_Params Parms{};

	Parms.DamageLocation = DamageLocation;
	Parms.DamageAmount = DamageAmount;
	Parms.DamageSource = DamageSource;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetIsFalling_ReturnValue = CallFunc_GetIsFalling_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Create_Damage_Text_InValue_ImplicitCast = CallFunc_Create_Damage_Text_InValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TreeTrunkGeom_Base.BP_TreeTrunkGeom_Base_C.OnDamageActor
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       EffectTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                              BaseDamage                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTagValueContainer          TagValueContainer                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FGameplayEffectCue>  GameplayCues                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTagValueContainer          AggregatedDamageTags                                             (Parm, OutParm)
// struct FTagValueContainer          CallFunc_Damage_Actor_Internal_OutTagValueContainer              (None)
// double                             CallFunc_Damage_Actor_Internal_BaseDamage_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TreeTrunkGeom_Base_C::OnDamageActor(class AActor* Source, struct FGameplayTagContainer& EffectTags, float BaseDamage, struct FHitResult& HitResult, struct FTagValueContainer& TagValueContainer, TArray<struct FGameplayEffectCue>& GameplayCues, struct FTagValueContainer* AggregatedDamageTags, const struct FTagValueContainer& CallFunc_Damage_Actor_Internal_OutTagValueContainer, double CallFunc_Damage_Actor_Internal_BaseDamage_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreeTrunkGeom_Base_C", "OnDamageActor");

	Params::ABP_TreeTrunkGeom_Base_C_OnDamageActor_Params Parms{};

	Parms.Source = Source;
	Parms.EffectTags = EffectTags;
	Parms.BaseDamage = BaseDamage;
	Parms.HitResult = HitResult;
	Parms.TagValueContainer = TagValueContainer;
	Parms.GameplayCues = GameplayCues;
	Parms.CallFunc_Damage_Actor_Internal_OutTagValueContainer = CallFunc_Damage_Actor_Internal_OutTagValueContainer;
	Parms.CallFunc_Damage_Actor_Internal_BaseDamage_ImplicitCast = CallFunc_Damage_Actor_Internal_BaseDamage_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (AggregatedDamageTags != nullptr)
		*AggregatedDamageTags = std::move(Parms.AggregatedDamageTags);

}


// Function BP_TreeTrunkGeom_Base.BP_TreeTrunkGeom_Base_C.PerformClientSideInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_TreeTrunkGeom_Base_C::PerformClientSideInteraction(class AController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreeTrunkGeom_Base_C", "PerformClientSideInteraction");

	Params::ABP_TreeTrunkGeom_Base_C_PerformClientSideInteraction_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TreeTrunkGeom_Base.BP_TreeTrunkGeom_Base_C.ExecuteUbergraph_BP_TreeTrunkGeom_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_Controller                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_TreeTrunkGeom_Base_C::ExecuteUbergraph_BP_TreeTrunkGeom_Base(int32 EntryPoint, class AController* K2Node_Event_Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreeTrunkGeom_Base_C", "ExecuteUbergraph_BP_TreeTrunkGeom_Base");

	Params::ABP_TreeTrunkGeom_Base_C_ExecuteUbergraph_BP_TreeTrunkGeom_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Controller = K2Node_Event_Controller;

	UObject::ProcessEvent(Func, &Parms);

}

}


