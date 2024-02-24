#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Building_Placement.GA_Building_Placement_C
// (None)

class UClass* UGA_Building_Placement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Building_Placement_C");

	return Clss;
}


// GA_Building_Placement_C GA_Building_Placement.Default__GA_Building_Placement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Building_Placement_C* UGA_Building_Placement_C::GetDefaultObj()
{
	static class UGA_Building_Placement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Building_Placement_C*>(UGA_Building_Placement_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Building_Placement.GA_Building_Placement_C.PlayAnimations
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             LBPCharacter                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSK_HMM_FP_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          CallFunc_GetItemID_OutItemReference                              (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadoutReadInterface>K2Node_DynamicCast_AsLoadout_Read_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMontageSetForAction_bFoundMontageSet                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAbilityMontages            CallFunc_GetMontageSetForAction_MontageSetForAction              (None)
// class AEquippableItem*             CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetRandomMontagesFromSet_RandomFirstPersonItem          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetRandomMontagesFromSet_RandomFirstPersonCharacter     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetRandomMontagesFromSet_RandomThirdPersonItem          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetRandomMontagesFromSet_RandomThirdPersonCharacter     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Placement_C::PlayAnimations(class ABP_Character_C* LBPCharacter, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AEquippableItem* Temp_object_Variable, class USkeletalMeshComponent* CallFunc_GetSK_HMM_FP_ReturnValue, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetMontageSetForAction_bFoundMontageSet, const struct FAbilityMontages& CallFunc_GetMontageSetForAction_MontageSetForAction, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomFirstPersonItem, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomFirstPersonCharacter, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomThirdPersonItem, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomThirdPersonCharacter, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "PlayAnimations");

	Params::UGA_Building_Placement_C_PlayAnimations_Params Parms{};

	Parms.LBPCharacter = LBPCharacter;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetSK_HMM_FP_ReturnValue = CallFunc_GetSK_HMM_FP_ReturnValue;
	Parms.CallFunc_GetItemID_OutItemReference = CallFunc_GetItemID_OutItemReference;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsLoadout_Read_Interface = K2Node_DynamicCast_AsLoadout_Read_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMontageSetForAction_bFoundMontageSet = CallFunc_GetMontageSetForAction_bFoundMontageSet;
	Parms.CallFunc_GetMontageSetForAction_MontageSetForAction = CallFunc_GetMontageSetForAction_MontageSetForAction;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;
	Parms.CallFunc_GetRandomMontagesFromSet_RandomFirstPersonItem = CallFunc_GetRandomMontagesFromSet_RandomFirstPersonItem;
	Parms.CallFunc_GetRandomMontagesFromSet_RandomFirstPersonCharacter = CallFunc_GetRandomMontagesFromSet_RandomFirstPersonCharacter;
	Parms.CallFunc_GetRandomMontagesFromSet_RandomThirdPersonItem = CallFunc_GetRandomMontagesFromSet_RandomThirdPersonItem;
	Parms.CallFunc_GetRandomMontagesFromSet_RandomThirdPersonCharacter = CallFunc_GetRandomMontagesFromSet_RandomThirdPersonCharacter;
	Parms.K2Node_DynamicCast_AsBP_Character = K2Node_DynamicCast_AsBP_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Placement.GA_Building_Placement_C.CancelPlacementTelemetryEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Building_Placement_C::CancelPlacementTelemetryEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "CancelPlacementTelemetryEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Building_Placement.GA_Building_Placement_C.StartPlacementTelemetryEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Building_Placement_C::StartPlacementTelemetryEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "StartPlacementTelemetryEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Building_Placement.GA_Building_Placement_C.Cancelled_CC9EF8D346CAB6973D1771B1A2F4A076
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleData                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Building_Placement_C::Cancelled_CC9EF8D346CAB6973D1771B1A2F4A076(struct FGameplayAbilityTargetDataHandle& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "Cancelled_CC9EF8D346CAB6973D1771B1A2F4A076");

	Params::UGA_Building_Placement_C_Cancelled_CC9EF8D346CAB6973D1771B1A2F4A076_Params Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Placement.GA_Building_Placement_C.ValidData_CC9EF8D346CAB6973D1771B1A2F4A076
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleData                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Building_Placement_C::ValidData_CC9EF8D346CAB6973D1771B1A2F4A076(struct FGameplayAbilityTargetDataHandle& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "ValidData_CC9EF8D346CAB6973D1771B1A2F4A076");

	Params::UGA_Building_Placement_C_ValidData_CC9EF8D346CAB6973D1771B1A2F4A076_Params Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Placement.GA_Building_Placement_C.EventReceived_0F50C93E41D09DB84EE4FD8E0BAA851E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Building_Placement_C::EventReceived_0F50C93E41D09DB84EE4FD8E0BAA851E(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "EventReceived_0F50C93E41D09DB84EE4FD8E0BAA851E");

	Params::UGA_Building_Placement_C_EventReceived_0F50C93E41D09DB84EE4FD8E0BAA851E_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Placement.GA_Building_Placement_C.OnNotifyEnd_992E08CB452FAED7A5C641ABAA84AA2F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Placement_C::OnNotifyEnd_992E08CB452FAED7A5C641ABAA84AA2F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "OnNotifyEnd_992E08CB452FAED7A5C641ABAA84AA2F");

	Params::UGA_Building_Placement_C_OnNotifyEnd_992E08CB452FAED7A5C641ABAA84AA2F_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Placement.GA_Building_Placement_C.OnNotifyBegin_992E08CB452FAED7A5C641ABAA84AA2F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Placement_C::OnNotifyBegin_992E08CB452FAED7A5C641ABAA84AA2F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "OnNotifyBegin_992E08CB452FAED7A5C641ABAA84AA2F");

	Params::UGA_Building_Placement_C_OnNotifyBegin_992E08CB452FAED7A5C641ABAA84AA2F_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Placement.GA_Building_Placement_C.OnInterrupted_992E08CB452FAED7A5C641ABAA84AA2F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Placement_C::OnInterrupted_992E08CB452FAED7A5C641ABAA84AA2F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "OnInterrupted_992E08CB452FAED7A5C641ABAA84AA2F");

	Params::UGA_Building_Placement_C_OnInterrupted_992E08CB452FAED7A5C641ABAA84AA2F_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Placement.GA_Building_Placement_C.OnBlendOut_992E08CB452FAED7A5C641ABAA84AA2F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Placement_C::OnBlendOut_992E08CB452FAED7A5C641ABAA84AA2F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "OnBlendOut_992E08CB452FAED7A5C641ABAA84AA2F");

	Params::UGA_Building_Placement_C_OnBlendOut_992E08CB452FAED7A5C641ABAA84AA2F_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Placement.GA_Building_Placement_C.OnCompleted_992E08CB452FAED7A5C641ABAA84AA2F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Placement_C::OnCompleted_992E08CB452FAED7A5C641ABAA84AA2F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "OnCompleted_992E08CB452FAED7A5C641ABAA84AA2F");

	Params::UGA_Building_Placement_C_OnCompleted_992E08CB452FAED7A5C641ABAA84AA2F_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Placement.GA_Building_Placement_C.OnCopyCancelled
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EBuildingFeedback       FeedbackId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Placement_C::OnCopyCancelled(enum class EBuildingFeedback FeedbackId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "OnCopyCancelled");

	Params::UGA_Building_Placement_C_OnCopyCancelled_Params Parms{};

	Parms.FeedbackId = FeedbackId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Placement.GA_Building_Placement_C.OnCopyConfirmed
// (Event, Public, BlueprintEvent)
// Parameters:

void UGA_Building_Placement_C::OnCopyConfirmed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "OnCopyConfirmed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Building_Placement.GA_Building_Placement_C.OnDeconstructCancelled
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EBuildingFeedback       FeedbackId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Placement_C::OnDeconstructCancelled(enum class EBuildingFeedback FeedbackId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "OnDeconstructCancelled");

	Params::UGA_Building_Placement_C_OnDeconstructCancelled_Params Parms{};

	Parms.FeedbackId = FeedbackId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Placement.GA_Building_Placement_C.OnDeconstructConfirmed
// (Event, Public, BlueprintEvent)
// Parameters:

void UGA_Building_Placement_C::OnDeconstructConfirmed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "OnDeconstructConfirmed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Building_Placement.GA_Building_Placement_C.OnEndBuilding
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EBuildingFeedback       FeedbackId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Placement_C::OnEndBuilding(enum class EBuildingFeedback FeedbackId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "OnEndBuilding");

	Params::UGA_Building_Placement_C_OnEndBuilding_Params Parms{};

	Parms.FeedbackId = FeedbackId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Placement.GA_Building_Placement_C.OnMovementConfirmed
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     MovingStructure                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Placement_C::OnMovementConfirmed(class UObject* MovingStructure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "OnMovementConfirmed");

	Params::UGA_Building_Placement_C_OnMovementConfirmed_Params Parms{};

	Parms.MovingStructure = MovingStructure;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Placement.GA_Building_Placement_C.OnPlacementConfirmed
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bRefire                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Placement_C::OnPlacementConfirmed(bool bRefire)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "OnPlacementConfirmed");

	Params::UGA_Building_Placement_C_OnPlacementConfirmed_Params Parms{};

	Parms.bRefire = bRefire;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Placement.GA_Building_Placement_C.OnPlacePreviewStructure
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FStructureAssetReference    StructureReference                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               IgnoreStructureBudgets                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Placement_C::OnPlacePreviewStructure(struct FGameplayAbilityTargetDataHandle& TargetData, struct FStructureAssetReference& StructureReference, bool IgnoreStructureBudgets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "OnPlacePreviewStructure");

	Params::UGA_Building_Placement_C_OnPlacePreviewStructure_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.StructureReference = StructureReference;
	Parms.IgnoreStructureBudgets = IgnoreStructureBudgets;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Placement.GA_Building_Placement_C.OnStartBuilding
// (Event, Public, BlueprintEvent)
// Parameters:

void UGA_Building_Placement_C::OnStartBuilding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "OnStartBuilding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Building_Placement.GA_Building_Placement_C.OnStartCopy
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Placement_C::OnStartCopy(class UObject* Structure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "OnStartCopy");

	Params::UGA_Building_Placement_C_OnStartCopy_Params Parms{};

	Parms.Structure = Structure;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Placement.GA_Building_Placement_C.OnStartDeconstruct
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Placement_C::OnStartDeconstruct(class UObject* Structure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "OnStartDeconstruct");

	Params::UGA_Building_Placement_C_OnStartDeconstruct_Params Parms{};

	Parms.Structure = Structure;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Placement.GA_Building_Placement_C.OnStartMovement
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Placement_C::OnStartMovement(class UObject* Structure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "OnStartMovement");

	Params::UGA_Building_Placement_C_OnStartMovement_Params Parms{};

	Parms.Structure = Structure;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Placement.GA_Building_Placement_C.OnStructureDeconstructed
// (Event, Public, BlueprintEvent)
// Parameters:

void UGA_Building_Placement_C::OnStructureDeconstructed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "OnStructureDeconstructed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Building_Placement.GA_Building_Placement_C.ServerOnly_OnSpawnStructure
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FStructureAssetReference    StructureReference                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               IgnoreStructureBudgets                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Placement_C::ServerOnly_OnSpawnStructure(struct FGameplayAbilityTargetDataHandle& TargetData, struct FStructureAssetReference& StructureReference, bool IgnoreStructureBudgets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "ServerOnly_OnSpawnStructure");

	Params::UGA_Building_Placement_C_ServerOnly_OnSpawnStructure_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.StructureReference = StructureReference;
	Parms.IgnoreStructureBudgets = IgnoreStructureBudgets;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Placement.GA_Building_Placement_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Placement_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "K2_OnEndAbility");

	Params::UGA_Building_Placement_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Placement.GA_Building_Placement_C.PlayMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMesh                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Placement_C::PlayMontage(class USkeletalMeshComponent* SkeletalMesh, class UAnimMontage* Montage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "PlayMontage");

	Params::UGA_Building_Placement_C_PlayMontage_Params Parms{};

	Parms.SkeletalMesh = SkeletalMesh;
	Parms.Montage = Montage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Placement.GA_Building_Placement_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Building_Placement_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Building_Placement.GA_Building_Placement_C.OnStructureSpawned
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     SpawnedStructure                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Placement_C::OnStructureSpawned(class UObject* SpawnedStructure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "OnStructureSpawned");

	Params::UGA_Building_Placement_C_OnStructureSpawned_Params Parms{};

	Parms.SpawnedStructure = SpawnedStructure;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Placement.GA_Building_Placement_C.OnStartPlacing
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FStructureAssetReference    StructureReference                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UGA_Building_Placement_C::OnStartPlacing(struct FStructureAssetReference& StructureReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "OnStartPlacing");

	Params::UGA_Building_Placement_C_OnStartPlacing_Params Parms{};

	Parms.StructureReference = StructureReference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Placement.GA_Building_Placement_C.OnPlacementCancelled
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FStructureAssetReference    StructureReference                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// enum class EBuildingFeedback       FeedbackId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Placement_C::OnPlacementCancelled(struct FStructureAssetReference& StructureReference, enum class EBuildingFeedback FeedbackId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "OnPlacementCancelled");

	Params::UGA_Building_Placement_C_OnPlacementCancelled_Params Parms{};

	Parms.StructureReference = StructureReference;
	Parms.FeedbackId = FeedbackId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Placement.GA_Building_Placement_C.OnMovementCancelled
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     MovingStructure                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EBuildingFeedback       FeedbackId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Placement_C::OnMovementCancelled(class UObject* MovingStructure, enum class EBuildingFeedback FeedbackId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "OnMovementCancelled");

	Params::UGA_Building_Placement_C_OnMovementCancelled_Params Parms{};

	Parms.MovingStructure = MovingStructure;
	Parms.FeedbackId = FeedbackId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Placement.GA_Building_Placement_C.ExecuteUbergraph_GA_Building_Placement
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_Payload                                       (None)
// struct FGameplayEventData          Temp_struct_Variable                                             (None)
// class UAbilityTask_WaitGameplayEvent*CallFunc_WaitGameplayEvent_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_Data_1                                        (ConstParm)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue_1               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildingFeedback       K2Node_Event_FeedbackId_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildingFeedback       K2Node_Event_FeedbackId_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildingFeedback       K2Node_Event_FeedbackId_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_MovingStructure_1                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bRefire                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_Event_TargetData_1                                        (ConstParm)
// struct FStructureAssetReference    K2Node_Event_StructureReference_3                                (ConstParm, HasGetValueTypeHash)
// bool                               K2Node_Event_IgnoreStructureBudgets_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_Structure_2                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_Structure_1                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_Structure                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_Event_TargetData                                          (ConstParm)
// struct FStructureAssetReference    K2Node_Event_StructureReference_2                                (ConstParm, HasGetValueTypeHash)
// bool                               K2Node_Event_IgnoreStructureBudgets                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetingLocationInfoCallFunc_MakeTargetLocationInfoFromOwnerActor_ReturnValue        (ContainsInstancedReference)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetActivatingController_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetActivatingCharacter_Character                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitTargetData* CallFunc_WaitTargetData_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayAbilityTargetActor* CallFunc_BeginSpawningActor_SpawnedActor                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BeginSpawningActor_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      K2Node_CustomEvent_SkeletalMesh                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_CustomEvent_Montage                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBuildingInterface>K2Node_DynamicCast_AsBuilding_Interface                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBuildingEventInterface>CallFunc_AddBuildingEventListener_Listener_CastInput             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TScriptInterface<class IBuildingInterface>K2Node_DynamicCast_AsBuilding_Interface_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBuildingEventInterface>CallFunc_RemoveBuildingEventListener_Listener_CastInput          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FSoftObjectPath             CallFunc_GetAssetPathFromStructureAssetReference_ReturnValue     (ZeroConstructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleCallFunc_AbilityPayloadFromSoftObjectPath_ReturnValue            (None)
// TScriptInterface<class IBuildingInterface>K2Node_DynamicCast_AsBuilding_Interface_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleCallFunc_AppendPayloadHandle_ReturnValue                         (None)
// bool                               CallFunc_IsMoving_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              (None)
// TScriptInterface<class IBuildingInterface>K2Node_DynamicCast_AsBuilding_Interface_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCopying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBuildingInterface>K2Node_DynamicCast_AsBuilding_Interface_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBuildingInterface>K2Node_DynamicCast_AsBuilding_Interface_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBuildingInterface>K2Node_DynamicCast_AsBuilding_Interface_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_SpawnedStructure                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStructureAssetReference    K2Node_Event_StructureReference_1                                (ConstParm, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable_1                                           (None)
// struct FStructureAssetReference    K2Node_Event_StructureReference                                  (ConstParm, HasGetValueTypeHash)
// enum class EBuildingFeedback       K2Node_Event_FeedbackId_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBuildingInterface>K2Node_DynamicCast_AsBuilding_Interface_7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_MovingStructure                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EBuildingFeedback       K2Node_Event_FeedbackId                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_Data                                          (ConstParm)

void UGA_Building_Placement_C::ExecuteUbergraph_GA_Building_Placement(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayEventData& K2Node_CustomEvent_Payload, const struct FGameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName Temp_name_Variable, TSubclassOf<class IInterface> Temp_class_Variable, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable_1, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_Data_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1, enum class EBuildingFeedback K2Node_Event_FeedbackId_4, enum class EBuildingFeedback K2Node_Event_FeedbackId_3, enum class EBuildingFeedback K2Node_Event_FeedbackId_2, class UObject* K2Node_Event_MovingStructure_1, bool K2Node_Event_bRefire, const struct FGameplayAbilityTargetDataHandle& K2Node_Event_TargetData_1, const struct FStructureAssetReference& K2Node_Event_StructureReference_3, bool K2Node_Event_IgnoreStructureBudgets_1, class UObject* K2Node_Event_Structure_2, class UObject* K2Node_Event_Structure_1, class UObject* K2Node_Event_Structure, const struct FGameplayAbilityTargetDataHandle& K2Node_Event_TargetData, const struct FStructureAssetReference& K2Node_Event_StructureReference_2, bool K2Node_Event_IgnoreStructureBudgets, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayAbilityTargetingLocationInfo& CallFunc_MakeTargetLocationInfoFromOwnerActor_ReturnValue, bool K2Node_Event_bWasCancelled, class AController* CallFunc_GetActivatingController_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class ACharacter* CallFunc_GetActivatingCharacter_Character, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UAbilityTask_WaitTargetData* CallFunc_WaitTargetData_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class AGameplayAbilityTargetActor* CallFunc_BeginSpawningActor_SpawnedActor, bool CallFunc_BeginSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class USkeletalMeshComponent* K2Node_CustomEvent_SkeletalMesh, class UAnimMontage* K2Node_CustomEvent_Montage, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBuildingEventInterface> CallFunc_AddBuildingEventListener_Listener_CastInput, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IBuildingEventInterface> CallFunc_RemoveBuildingEventListener_Listener_CastInput, const struct FSoftObjectPath& CallFunc_GetAssetPathFromStructureAssetReference_ReturnValue, const struct FGameplayAbilityPayloadHandle& CallFunc_AbilityPayloadFromSoftObjectPath_ReturnValue, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface_2, bool K2Node_DynamicCast_bSuccess_2, const struct FGameplayAbilityPayloadHandle& CallFunc_AppendPayloadHandle_ReturnValue, bool CallFunc_IsMoving_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsCopying_ReturnValue, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface_4, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface_5, bool K2Node_DynamicCast_bSuccess_5, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface_6, bool K2Node_DynamicCast_bSuccess_6, class UObject* K2Node_Event_SpawnedStructure, const struct FStructureAssetReference& K2Node_Event_StructureReference_1, bool CallFunc_K2_CommitAbility_ReturnValue_1, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_1, const struct FStructureAssetReference& K2Node_Event_StructureReference, enum class EBuildingFeedback K2Node_Event_FeedbackId_1, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface_7, bool K2Node_DynamicCast_bSuccess_7, class UObject* K2Node_Event_MovingStructure, enum class EBuildingFeedback K2Node_Event_FeedbackId, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Placement_C", "ExecuteUbergraph_GA_Building_Placement");

	Params::UGA_Building_Placement_C_ExecuteUbergraph_GA_Building_Placement_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Payload = K2Node_CustomEvent_Payload;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_WaitGameplayEvent_ReturnValue = CallFunc_WaitGameplayEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CustomEvent_Data_1 = K2Node_CustomEvent_Data_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue_1 = CallFunc_GetOwningActorFromActorInfo_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.K2Node_Event_FeedbackId_4 = K2Node_Event_FeedbackId_4;
	Parms.K2Node_Event_FeedbackId_3 = K2Node_Event_FeedbackId_3;
	Parms.K2Node_Event_FeedbackId_2 = K2Node_Event_FeedbackId_2;
	Parms.K2Node_Event_MovingStructure_1 = K2Node_Event_MovingStructure_1;
	Parms.K2Node_Event_bRefire = K2Node_Event_bRefire;
	Parms.K2Node_Event_TargetData_1 = K2Node_Event_TargetData_1;
	Parms.K2Node_Event_StructureReference_3 = K2Node_Event_StructureReference_3;
	Parms.K2Node_Event_IgnoreStructureBudgets_1 = K2Node_Event_IgnoreStructureBudgets_1;
	Parms.K2Node_Event_Structure_2 = K2Node_Event_Structure_2;
	Parms.K2Node_Event_Structure_1 = K2Node_Event_Structure_1;
	Parms.K2Node_Event_Structure = K2Node_Event_Structure;
	Parms.K2Node_Event_TargetData = K2Node_Event_TargetData;
	Parms.K2Node_Event_StructureReference_2 = K2Node_Event_StructureReference_2;
	Parms.K2Node_Event_IgnoreStructureBudgets = K2Node_Event_IgnoreStructureBudgets;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_MakeTargetLocationInfoFromOwnerActor_ReturnValue = CallFunc_MakeTargetLocationInfoFromOwnerActor_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_GetActivatingController_ReturnValue = CallFunc_GetActivatingController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetActivatingCharacter_Character = CallFunc_GetActivatingCharacter_Character;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_WaitTargetData_ReturnValue = CallFunc_WaitTargetData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_BeginSpawningActor_SpawnedActor = CallFunc_BeginSpawningActor_SpawnedActor;
	Parms.CallFunc_BeginSpawningActor_ReturnValue = CallFunc_BeginSpawningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CustomEvent_SkeletalMesh = K2Node_CustomEvent_SkeletalMesh;
	Parms.K2Node_CustomEvent_Montage = K2Node_CustomEvent_Montage;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuilding_Interface = K2Node_DynamicCast_AsBuilding_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AddBuildingEventListener_Listener_CastInput = CallFunc_AddBuildingEventListener_Listener_CastInput;
	Parms.K2Node_DynamicCast_AsBuilding_Interface_1 = K2Node_DynamicCast_AsBuilding_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_RemoveBuildingEventListener_Listener_CastInput = CallFunc_RemoveBuildingEventListener_Listener_CastInput;
	Parms.CallFunc_GetAssetPathFromStructureAssetReference_ReturnValue = CallFunc_GetAssetPathFromStructureAssetReference_ReturnValue;
	Parms.CallFunc_AbilityPayloadFromSoftObjectPath_ReturnValue = CallFunc_AbilityPayloadFromSoftObjectPath_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuilding_Interface_2 = K2Node_DynamicCast_AsBuilding_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_AppendPayloadHandle_ReturnValue = CallFunc_AppendPayloadHandle_ReturnValue;
	Parms.CallFunc_IsMoving_ReturnValue = CallFunc_IsMoving_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.K2Node_DynamicCast_AsBuilding_Interface_3 = K2Node_DynamicCast_AsBuilding_Interface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsCopying_ReturnValue = CallFunc_IsCopying_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuilding_Interface_4 = K2Node_DynamicCast_AsBuilding_Interface_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsBuilding_Interface_5 = K2Node_DynamicCast_AsBuilding_Interface_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsBuilding_Interface_6 = K2Node_DynamicCast_AsBuilding_Interface_6;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_Event_SpawnedStructure = K2Node_Event_SpawnedStructure;
	Parms.K2Node_Event_StructureReference_1 = K2Node_Event_StructureReference_1;
	Parms.CallFunc_K2_CommitAbility_ReturnValue_1 = CallFunc_K2_CommitAbility_ReturnValue_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_Event_StructureReference = K2Node_Event_StructureReference;
	Parms.K2Node_Event_FeedbackId_1 = K2Node_Event_FeedbackId_1;
	Parms.K2Node_DynamicCast_AsBuilding_Interface_7 = K2Node_DynamicCast_AsBuilding_Interface_7;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_Event_MovingStructure = K2Node_Event_MovingStructure;
	Parms.K2Node_Event_FeedbackId = K2Node_Event_FeedbackId;
	Parms.K2Node_CustomEvent_Data = K2Node_CustomEvent_Data;

	UObject::ProcessEvent(Func, &Parms);

}

}


