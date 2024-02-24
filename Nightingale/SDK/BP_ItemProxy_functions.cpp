#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemProxy.BP_ItemProxy_C
// (Actor)

class UClass* ABP_ItemProxy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemProxy_C");

	return Clss;
}


// BP_ItemProxy_C BP_ItemProxy.Default__BP_ItemProxy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemProxy_C* ABP_ItemProxy_C::GetDefaultObj()
{
	static class ABP_ItemProxy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemProxy_C*>(ABP_ItemProxy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemProxy.BP_ItemProxy_C.CanQueryInteractable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Can_Query                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::CanQueryInteractable(bool* Can_Query)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "CanQueryInteractable");

	Params::ABP_ItemProxy_C_CanQueryInteractable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Can_Query != nullptr)
		*Can_Query = Parms.Can_Query;

}


// Function BP_ItemProxy.BP_ItemProxy_C.HoldInteractionAvailable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bAvailable                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::HoldInteractionAvailable(bool* bAvailable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "HoldInteractionAvailable");

	Params::ABP_ItemProxy_C_HoldInteractionAvailable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bAvailable != nullptr)
		*bAvailable = Parms.bAvailable;

}


// Function BP_ItemProxy.BP_ItemProxy_C.IsInteractionDisabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               bIsDisabled                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      DisabledText                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::IsInteractionDisabled(class AController* Controller, const struct FInteractionData& InteractionData, bool* bIsDisabled, class FString* DisabledText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "IsInteractionDisabled");

	Params::ABP_ItemProxy_C_IsInteractionDisabled_Params Parms{};

	Parms.Controller = Controller;
	Parms.InteractionData = InteractionData;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsDisabled != nullptr)
		*bIsDisabled = Parms.bIsDisabled;

	if (DisabledText != nullptr)
		*DisabledText = std::move(Parms.DisabledText);

}


// Function BP_ItemProxy.BP_ItemProxy_C.DoesHaveResourceType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              HitId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EResourceType           DesiredResourceType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bHasResourceType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::DoesHaveResourceType(int32 HitId, enum class EResourceType DesiredResourceType, bool* bHasResourceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "DoesHaveResourceType");

	Params::ABP_ItemProxy_C_DoesHaveResourceType_Params Parms{};

	Parms.HitId = HitId;
	Parms.DesiredResourceType = DesiredResourceType;

	UObject::ProcessEvent(Func, &Parms);

	if (bHasResourceType != nullptr)
		*bHasResourceType = Parms.bHasResourceType;

}


// Function BP_ItemProxy.BP_ItemProxy_C.IsHarvestable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FInteractionData            Interaction                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               IsHarvestable                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::IsHarvestable(const struct FInteractionData& Interaction, bool* IsHarvestable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "IsHarvestable");

	Params::ABP_ItemProxy_C_IsHarvestable_Params Parms{};

	Parms.Interaction = Interaction;

	UObject::ProcessEvent(Func, &Parms);

	if (IsHarvestable != nullptr)
		*IsHarvestable = Parms.IsHarvestable;

}


// Function BP_ItemProxy.BP_ItemProxy_C.GetInteractIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// TSoftObjectPtr<class UTexture2D>   Icon                                                             (Parm, OutParm, HasGetValueTypeHash)

void ABP_ItemProxy_C::GetInteractIcon(const struct FInteractionData& InteractionData, TSoftObjectPtr<class UTexture2D>* Icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "GetInteractIcon");

	Params::ABP_ItemProxy_C_GetInteractIcon_Params Parms{};

	Parms.InteractionData = InteractionData;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;

}


// Function BP_ItemProxy.BP_ItemProxy_C.GetInteractText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class FString                      InteractText                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemName_ReturnValue                                 (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::GetInteractText(const struct FInteractionData& InteractionData, class FString* InteractText, bool CallFunc_IsDedicatedServer_ReturnValue, class FText CallFunc_GetItemName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "GetInteractText");

	Params::ABP_ItemProxy_C_GetInteractText_Params Parms{};

	Parms.InteractionData = InteractionData;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetItemName_ReturnValue = CallFunc_GetItemName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractText != nullptr)
		*InteractText = std::move(Parms.InteractText);

}


// Function BP_ItemProxy.BP_ItemProxy_C.InteractionRequiresClientOnly
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               RequiresClientAction                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::InteractionRequiresClientOnly(class AController* Controller, bool* RequiresClientAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "InteractionRequiresClientOnly");

	Params::ABP_ItemProxy_C_InteractionRequiresClientOnly_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

	if (RequiresClientAction != nullptr)
		*RequiresClientAction = Parms.RequiresClientAction;

}


// Function BP_ItemProxy.BP_ItemProxy_C.InteractReleased
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::InteractReleased(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "InteractReleased");

	Params::ABP_ItemProxy_C_InteractReleased_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_ItemProxy.BP_ItemProxy_C.InteractPressed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::InteractPressed(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "InteractPressed");

	Params::ABP_ItemProxy_C_InteractPressed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_ItemProxy.BP_ItemProxy_C.CanInteractWithActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               InteractAvailable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::CanInteractWithActor(class AController* Controller, const struct FInteractionData& InteractionData, bool* InteractAvailable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "CanInteractWithActor");

	Params::ABP_ItemProxy_C_CanInteractWithActor_Params Parms{};

	Parms.Controller = Controller;
	Parms.InteractionData = InteractionData;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractAvailable != nullptr)
		*InteractAvailable = Parms.InteractAvailable;

}


// Function BP_ItemProxy.BP_ItemProxy_C.ReturnMeshToHighlight
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// TArray<class UStaticMeshComponent*>StaticMesh_to_Highlight                                          (Parm, OutParm, ContainsInstancedReference)
// TArray<class USkeletalMeshComponent*>SkeletalMesh_to_Highlight                                        (Parm, OutParm, ContainsInstancedReference)
// bool                               Hostile_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            Quality                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USkeletalMeshComponent*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// TArray<class UStaticMeshComponent*>K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)

void ABP_ItemProxy_C::ReturnMeshToHighlight(const struct FInteractionData& InteractionData, TArray<class UStaticMeshComponent*>* StaticMesh_to_Highlight, TArray<class USkeletalMeshComponent*>* SkeletalMesh_to_Highlight, bool* Hostile_, enum class EItemQuality* Quality, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array, TArray<class UStaticMeshComponent*>& K2Node_MakeArray_Array_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "ReturnMeshToHighlight");

	Params::ABP_ItemProxy_C_ReturnMeshToHighlight_Params Parms{};

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


// Function BP_ItemProxy.BP_ItemProxy_C.OnNotifyNearbyPhysics
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     TriggeringObject                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::OnNotifyNearbyPhysics(class UObject* TriggeringObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "OnNotifyNearbyPhysics");

	Params::ABP_ItemProxy_C_OnNotifyNearbyPhysics_Params Parms{};

	Parms.TriggeringObject = TriggeringObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy.BP_ItemProxy_C.UnbindStructureEvents
// (Private, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     StructureObject                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureEventsObject*      EventsObject                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPlaceableEntityInterface>K2Node_DynamicCast_AsPlaceable_Entity_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureEventInterface>K2Node_DynamicCast_AsStructure_Event_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureEventsObject*      CallFunc_GetStructureEventsObject_ReturnValue                    (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::UnbindStructureEvents(class UObject* StructureObject, class UStructureEventsObject* EventsObject, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IPlaceableEntityInterface> K2Node_DynamicCast_AsPlaceable_Entity_Interface, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IStructureEventInterface> K2Node_DynamicCast_AsStructure_Event_Interface, bool K2Node_DynamicCast_bSuccess_1, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "UnbindStructureEvents");

	Params::ABP_ItemProxy_C_UnbindStructureEvents_Params Parms{};

	Parms.StructureObject = StructureObject;
	Parms.EventsObject = EventsObject;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlaceable_Entity_Interface = K2Node_DynamicCast_AsPlaceable_Entity_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsStructure_Event_Interface = K2Node_DynamicCast_AsStructure_Event_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetStructureEventsObject_ReturnValue = CallFunc_GetStructureEventsObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy.BP_ItemProxy_C.UnbindLastBoundObjectsOnSleep
// (Private, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     CurrentLastBoundObject                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class INotifyNearbyPhysicsInterface>K2Node_DynamicCast_AsNotify_Nearby_Physics_Interface             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::UnbindLastBoundObjectsOnSleep(class UObject* CurrentLastBoundObject, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class INotifyNearbyPhysicsInterface> K2Node_DynamicCast_AsNotify_Nearby_Physics_Interface, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, class UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "UnbindLastBoundObjectsOnSleep");

	Params::ABP_ItemProxy_C_UnbindLastBoundObjectsOnSleep_Params Parms{};

	Parms.CurrentLastBoundObject = CurrentLastBoundObject;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsNotify_Nearby_Physics_Interface = K2Node_DynamicCast_AsNotify_Nearby_Physics_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy.BP_ItemProxy_C.SetPhysics
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENetDormancy            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENetDormancy            Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENetDormancy            K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::SetPhysics(bool bEnabled, bool Temp_bool_Variable, enum class ENetDormancy Temp_byte_Variable, enum class ENetDormancy Temp_byte_Variable_1, enum class ENetDormancy K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "SetPhysics");

	Params::ABP_ItemProxy_C_SetPhysics_Params Parms{};

	Parms.bEnabled = bEnabled;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy.BP_ItemProxy_C.EnablePhysics
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ItemProxy_C::EnablePhysics()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "EnablePhysics");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemProxy.BP_ItemProxy_C.OnStructureMoved
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     MovedEntity                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::OnStructureMoved(class UObject* MovedEntity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "OnStructureMoved");

	Params::ABP_ItemProxy_C_OnStructureMoved_Params Parms{};

	Parms.MovedEntity = MovedEntity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy.BP_ItemProxy_C.OnStructureDestroyed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::OnStructureDestroyed(class UObject* Structure, class AActor* Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "OnStructureDestroyed");

	Params::ABP_ItemProxy_C_OnStructureDestroyed_Params Parms{};

	Parms.Structure = Structure;
	Parms.Instigator = Instigator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy.BP_ItemProxy_C.OnSleep
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     BoxTraceHalfSize                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             SphereTraceRadius                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CurrentHitObject                                                 (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureEventsObject*      Structure                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             Temp_object_Variable                                             (ConstParm, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Temp_struct_Variable_3                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable_4                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StructureComponentOwner_C>K2Node_DynamicCast_AsBPI_Structure_Component_Owner               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureEventsObject*      CallFunc_GetEventsObject_EventObject                             (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class INotifyNearbyPhysicsInterface>K2Node_DynamicCast_AsNotify_Nearby_Physics_Interface             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          CallFunc_NWXBoxTraceMultiForObjects_OutHits                      (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_NWXBoxTraceMultiForObjects_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPlaceableEntityInterface>K2Node_DynamicCast_AsPlaceable_Entity_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetHitObject_OutObject                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          CallFunc_NWXMultiSphereTraceByChannel_OutHits                    (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_NWXMultiSphereTraceByChannel_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_Array_Get_Item_1                                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UObject*                     CallFunc_GetHitObject_OutObject_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NWXMultiSphereTraceByChannel_Radius_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::OnSleep(const struct FVector& BoxTraceHalfSize, double SphereTraceRadius, class UObject* CurrentHitObject, class UStructureEventsObject* Structure, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, TArray<class UObject*>& Temp_object_Variable, int32 Temp_int_Array_Index_Variable, const struct FLinearColor& Temp_struct_Variable_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FRotator& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, TScriptInterface<class IBPI_StructureComponentOwner_C> K2Node_DynamicCast_AsBPI_Structure_Component_Owner, bool K2Node_DynamicCast_bSuccess, class UStructureEventsObject* CallFunc_GetEventsObject_EventObject, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, TScriptInterface<class INotifyNearbyPhysicsInterface> K2Node_DynamicCast_AsNotify_Nearby_Physics_Interface, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1, TArray<class UObject*>& K2Node_MakeArray_Array, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<struct FHitResult>& CallFunc_NWXBoxTraceMultiForObjects_OutHits, bool CallFunc_NWXBoxTraceMultiForObjects_ReturnValue, TScriptInterface<class IPlaceableEntityInterface> K2Node_DynamicCast_AsPlaceable_Entity_Interface, bool K2Node_DynamicCast_bSuccess_2, const struct FHitResult& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_GetHitObject_OutObject, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TArray<struct FHitResult>& CallFunc_NWXMultiSphereTraceByChannel_OutHits, bool CallFunc_NWXMultiSphereTraceByChannel_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item_1, class UObject* CallFunc_GetHitObject_OutObject_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, float CallFunc_NWXMultiSphereTraceByChannel_Radius_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "OnSleep");

	Params::ABP_ItemProxy_C_OnSleep_Params Parms{};

	Parms.BoxTraceHalfSize = BoxTraceHalfSize;
	Parms.SphereTraceRadius = SphereTraceRadius;
	Parms.CurrentHitObject = CurrentHitObject;
	Parms.Structure = Structure;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Structure_Component_Owner = K2Node_DynamicCast_AsBPI_Structure_Component_Owner;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetEventsObject_EventObject = CallFunc_GetEventsObject_EventObject;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsNotify_Nearby_Physics_Interface = K2Node_DynamicCast_AsNotify_Nearby_Physics_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_NWXBoxTraceMultiForObjects_OutHits = CallFunc_NWXBoxTraceMultiForObjects_OutHits;
	Parms.CallFunc_NWXBoxTraceMultiForObjects_ReturnValue = CallFunc_NWXBoxTraceMultiForObjects_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlaceable_Entity_Interface = K2Node_DynamicCast_AsPlaceable_Entity_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetHitObject_OutObject = CallFunc_GetHitObject_OutObject;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_NWXMultiSphereTraceByChannel_OutHits = CallFunc_NWXMultiSphereTraceByChannel_OutHits;
	Parms.CallFunc_NWXMultiSphereTraceByChannel_ReturnValue = CallFunc_NWXMultiSphereTraceByChannel_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetHitObject_OutObject_1 = CallFunc_GetHitObject_OutObject_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_NWXMultiSphereTraceByChannel_Radius_ImplicitCast = CallFunc_NWXMultiSphereTraceByChannel_Radius_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy.BP_ItemProxy_C.OnAsyncLoadComplete
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Asset                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::OnAsyncLoadComplete(class UObject* Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "OnAsyncLoadComplete");

	Params::ABP_ItemProxy_C_OnAsyncLoadComplete_Params Parms{};

	Parms.Asset = Asset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy.BP_ItemProxy_C.OnInitialize
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UStaticMesh>  CallFunc_GetGroundMesh_ReturnValue                               (UObjectWrapper, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAssetLoaderProvider>CallFunc_LoadSingle_LoaderProvider_CastInput                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_ItemProxy_C::OnInitialize(bool CallFunc_IsValidSoftObjectReference_ReturnValue, TSoftObjectPtr<class UStaticMesh> CallFunc_GetGroundMesh_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IAssetLoaderProvider> CallFunc_LoadSingle_LoaderProvider_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "OnInitialize");

	Params::ABP_ItemProxy_C_OnInitialize_Params Parms{};

	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_GetGroundMesh_ReturnValue = CallFunc_GetGroundMesh_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_LoadSingle_LoaderProvider_CastInput = CallFunc_LoadSingle_LoaderProvider_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy.BP_ItemProxy_C.GetInstanceQuantity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int32                              Quantity                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::GetInstanceQuantity(int32* Quantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "GetInstanceQuantity");

	Params::ABP_ItemProxy_C_GetInstanceQuantity_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Quantity != nullptr)
		*Quantity = Parms.Quantity;

}


// Function BP_ItemProxy.BP_ItemProxy_C.OnSpawnAudioLoaded
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               LoadedAudio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::OnSpawnAudioLoaded(class UAkAudioEvent* LoadedAudio, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_PostAkEventScoped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "OnSpawnAudioLoaded");

	Params::ABP_ItemProxy_C_OnSpawnAudioLoaded_Params Parms{};

	Parms.LoadedAudio = LoadedAudio;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_PostAkEventScoped_ReturnValue = CallFunc_PostAkEventScoped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy.BP_ItemProxy_C.LoadAndPlaySpawnedAudio
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UAkAudioEvent>FoundAudioEvent                                                  (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FGameplayTag                Context                                                          (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                AVFX_Tag                                                         (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// TArray<class UScriptStruct*>       K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Temp_struct_Variable                                             (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetItemAVFXTag_ReturnValue                              (NoDestructor, HasGetValueTypeHash)
// TArray<struct FAffinityTableCellDataWrapper>CallFunc_QueryTable_OutMemoryPtrs                                (ReferenceParm)
// bool                               CallFunc_QueryTable_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FResourceAudioSpawned       CallFunc_GetTableCellData_OutData                                (None)
// TSoftObjectPtr<class UAkAudioEvent>CallFunc_ResolveTaggableSound_ReturnValue                        (UObjectWrapper, HasGetValueTypeHash)

void ABP_ItemProxy_C::LoadAndPlaySpawnedAudio(TSoftObjectPtr<class UAkAudioEvent> FoundAudioEvent, const struct FGameplayTag& Context, const struct FGameplayTag& AVFX_Tag, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FGameplayTagContainer& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag, const struct FGameplayTag& CallFunc_GetItemAVFXTag_ReturnValue, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, const struct FResourceAudioSpawned& CallFunc_GetTableCellData_OutData, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveTaggableSound_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "LoadAndPlaySpawnedAudio");

	Params::ABP_ItemProxy_C_LoadAndPlaySpawnedAudio_Params Parms{};

	Parms.FoundAudioEvent = FoundAudioEvent;
	Parms.Context = Context;
	Parms.AVFX_Tag = AVFX_Tag;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag = CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag;
	Parms.CallFunc_GetItemAVFXTag_ReturnValue = CallFunc_GetItemAVFXTag_ReturnValue;
	Parms.CallFunc_QueryTable_OutMemoryPtrs = CallFunc_QueryTable_OutMemoryPtrs;
	Parms.CallFunc_QueryTable_ReturnValue = CallFunc_QueryTable_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_GetTableCellData_OutData = CallFunc_GetTableCellData_OutData;
	Parms.CallFunc_ResolveTaggableSound_ReturnValue = CallFunc_ResolveTaggableSound_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy.BP_ItemProxy_C.SpawnEssenceEffect
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EssenceTypeIndex                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            ItemQuality                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Get_Item_Quality_Colour_QualityColour_Linear            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_Get_Item_Quality_Colour_QualityColour_Slate__UI_        (None)
// enum class EItemQuality            CallFunc_GetItemQualityFromEntry_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_ByteToDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeLiteralDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeLiteralDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeLiteralDouble_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeLiteralDouble_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NVFX_Spawn_System_Attached_SpawnSuccessful              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_NVFX_Spawn_System_Attached_NiagaraSystemSpawned         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColor_Desaturated_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_TryGetItemEssenceVFXIndex_OutVFXIndex                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGetResult              CallFunc_TryGetItemEssenceVFXIndex_Branches                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LinearColor_Desaturated_InDesaturation_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_LinearColorFloat_B_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::SpawnEssenceEffect(int32 EssenceTypeIndex, enum class EItemQuality ItemQuality, const struct FLinearColor& CallFunc_Get_Item_Quality_Colour_QualityColour_Linear, const struct FSlateColor& CallFunc_Get_Item_Quality_Colour_QualityColour_Slate__UI_, enum class EItemQuality CallFunc_GetItemQualityFromEntry_ReturnValue, double CallFunc_Conv_ByteToDouble_ReturnValue, enum class EItemQuality Temp_byte_Variable, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_MakeLiteralDouble_ReturnValue, double CallFunc_MakeLiteralDouble_ReturnValue_1, double CallFunc_MakeLiteralDouble_ReturnValue_2, double CallFunc_MakeLiteralDouble_ReturnValue_3, double K2Node_Select_Default, const struct FVector& CallFunc_GetUpVector_ReturnValue, enum class EItemQuality Temp_byte_Variable_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_NVFX_Spawn_System_Attached_SpawnSuccessful, class UNiagaraComponent* CallFunc_NVFX_Spawn_System_Attached_NiagaraSystemSpawned, double K2Node_Select_Default_1, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, const struct FLinearColor& CallFunc_LinearColor_Desaturated_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_TryGetItemEssenceVFXIndex_OutVFXIndex, enum class EGetResult CallFunc_TryGetItemEssenceVFXIndex_Branches, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1, float CallFunc_LinearColor_Desaturated_InDesaturation_ImplicitCast, float CallFunc_Multiply_LinearColorFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "SpawnEssenceEffect");

	Params::ABP_ItemProxy_C_SpawnEssenceEffect_Params Parms{};

	Parms.EssenceTypeIndex = EssenceTypeIndex;
	Parms.ItemQuality = ItemQuality;
	Parms.CallFunc_Get_Item_Quality_Colour_QualityColour_Linear = CallFunc_Get_Item_Quality_Colour_QualityColour_Linear;
	Parms.CallFunc_Get_Item_Quality_Colour_QualityColour_Slate__UI_ = CallFunc_Get_Item_Quality_Colour_QualityColour_Slate__UI_;
	Parms.CallFunc_GetItemQualityFromEntry_ReturnValue = CallFunc_GetItemQualityFromEntry_ReturnValue;
	Parms.CallFunc_Conv_ByteToDouble_ReturnValue = CallFunc_Conv_ByteToDouble_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_MakeLiteralDouble_ReturnValue = CallFunc_MakeLiteralDouble_ReturnValue;
	Parms.CallFunc_MakeLiteralDouble_ReturnValue_1 = CallFunc_MakeLiteralDouble_ReturnValue_1;
	Parms.CallFunc_MakeLiteralDouble_ReturnValue_2 = CallFunc_MakeLiteralDouble_ReturnValue_2;
	Parms.CallFunc_MakeLiteralDouble_ReturnValue_3 = CallFunc_MakeLiteralDouble_ReturnValue_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetUpVector_ReturnValue = CallFunc_GetUpVector_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_NVFX_Spawn_System_Attached_SpawnSuccessful = CallFunc_NVFX_Spawn_System_Attached_SpawnSuccessful;
	Parms.CallFunc_NVFX_Spawn_System_Attached_NiagaraSystemSpawned = CallFunc_NVFX_Spawn_System_Attached_NiagaraSystemSpawned;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue = CallFunc_Multiply_LinearColorFloat_ReturnValue;
	Parms.CallFunc_LinearColor_Desaturated_ReturnValue = CallFunc_LinearColor_Desaturated_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_TryGetItemEssenceVFXIndex_OutVFXIndex = CallFunc_TryGetItemEssenceVFXIndex_OutVFXIndex;
	Parms.CallFunc_TryGetItemEssenceVFXIndex_Branches = CallFunc_TryGetItemEssenceVFXIndex_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast = CallFunc_SetFloatParameter_Param_ImplicitCast;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_1 = CallFunc_SetFloatParameter_Param_ImplicitCast_1;
	Parms.CallFunc_LinearColor_Desaturated_InDesaturation_ImplicitCast = CallFunc_LinearColor_Desaturated_InDesaturation_ImplicitCast;
	Parms.CallFunc_Multiply_LinearColorFloat_B_ImplicitCast = CallFunc_Multiply_LinearColorFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy.BP_ItemProxy_C.GetInteractionTag
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                InteractionTag                                                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_ItemProxy_C::GetInteractionTag(struct FGameplayTag* InteractionTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "GetInteractionTag");

	Params::ABP_ItemProxy_C_GetInteractionTag_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InteractionTag != nullptr)
		*InteractionTag = std::move(Parms.InteractionTag);

	return Parms.ReturnValue;

}


// Function BP_ItemProxy.BP_ItemProxy_C.TrySchedulePhysicsTimeout
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::TrySchedulePhysicsTimeout(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "TrySchedulePhysicsTimeout");

	Params::ABP_ItemProxy_C_TrySchedulePhysicsTimeout_Params Parms{};

	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy.BP_ItemProxy_C.DisablePhysics
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ItemProxy_C::DisablePhysics()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "DisablePhysics");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemProxy.BP_ItemProxy_C.SetPhysicsTimeoutOnHit
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TimeoutInSeconds                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::SetPhysicsTimeoutOnHit(double TimeoutInSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "SetPhysicsTimeoutOnHit");

	Params::ABP_ItemProxy_C_SetPhysicsTimeoutOnHit_Params Parms{};

	Parms.TimeoutInSeconds = TimeoutInSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy.BP_ItemProxy_C.SpawnImpactVFX
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AActor*                      Self_Actor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTimeSeconds_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::SpawnImpactVFX(struct FHitResult& Hit, class AActor* Self_Actor, double CallFunc_GetTimeSeconds_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, double CallFunc_VSize_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_GetTimeSeconds_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "SpawnImpactVFX");

	Params::ABP_ItemProxy_C_SpawnImpactVFX_Params Parms{};

	Parms.Hit = Hit;
	Parms.Self_Actor = Self_Actor;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetTimeSeconds_ReturnValue_1 = CallFunc_GetTimeSeconds_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy.BP_ItemProxy_C.TryAddItemProxyToStructure
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     UnusedResources                                                  (Edit, BlueprintVisible)
// struct FGameplayTagContainer       EntryTraits                                                      (Edit, BlueprintVisible)
// int32                              QuantityRemaining                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStructureResourceRequirements>Temp_struct_Variable                                             (ReferenceParm, ContainsInstancedReference)
// struct FStructureResourceRequirementsCallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// int32                              CallFunc_GetQuantityRemaining_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// struct FInstanceData_Traits        CallFunc_TryGetItemTraits_Traits                                 (None)
// enum class EGetResult              CallFunc_TryGetItemTraits_Branches                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureResourceHandlingInterface>K2Node_DynamicCast_AsStructure_Resource_Handling_Interface       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddConstructionResources_bSuccess                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_AddConstructionResources_OutUnusedResources             (ReferenceParm)
// TArray<struct FInventoryEntry>     CallFunc_AddConstructionResources_OutAddedResources              (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISchematicInfoInterface>K2Node_DynamicCast_AsSchematic_Info_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStructureResourceRequirements>CallFunc_GetTotalResourceRequirements_ReturnValue                (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_ItemProxy_C::TryAddItemProxyToStructure(class UObject* Structure, const TArray<struct FInventoryEntry>& UnusedResources, const struct FGameplayTagContainer& EntryTraits, int32 QuantityRemaining, int32 Temp_int_Array_Index_Variable, TArray<struct FStructureResourceRequirements>& Temp_struct_Variable, const struct FStructureResourceRequirements& CallFunc_Array_Get_Item, int32 CallFunc_GetQuantityRemaining_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TArray<struct FInventoryEntry>& K2Node_MakeArray_Array, const struct FInstanceData_Traits& CallFunc_TryGetItemTraits_Traits, enum class EGetResult CallFunc_TryGetItemTraits_Branches, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IStructureResourceHandlingInterface> K2Node_DynamicCast_AsStructure_Resource_Handling_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AddConstructionResources_bSuccess, TArray<struct FInventoryEntry>& CallFunc_AddConstructionResources_OutUnusedResources, TArray<struct FInventoryEntry>& CallFunc_AddConstructionResources_OutAddedResources, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_3, TScriptInterface<class ISchematicInfoInterface> K2Node_DynamicCast_AsSchematic_Info_Interface, bool K2Node_DynamicCast_bSuccess_1, TArray<struct FStructureResourceRequirements>& CallFunc_GetTotalResourceRequirements_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "TryAddItemProxyToStructure");

	Params::ABP_ItemProxy_C_TryAddItemProxyToStructure_Params Parms{};

	Parms.Structure = Structure;
	Parms.UnusedResources = UnusedResources;
	Parms.EntryTraits = EntryTraits;
	Parms.QuantityRemaining = QuantityRemaining;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetQuantityRemaining_ReturnValue = CallFunc_GetQuantityRemaining_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_TryGetItemTraits_Traits = CallFunc_TryGetItemTraits_Traits;
	Parms.CallFunc_TryGetItemTraits_Branches = CallFunc_TryGetItemTraits_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsStructure_Resource_Handling_Interface = K2Node_DynamicCast_AsStructure_Resource_Handling_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AddConstructionResources_bSuccess = CallFunc_AddConstructionResources_bSuccess;
	Parms.CallFunc_AddConstructionResources_OutUnusedResources = CallFunc_AddConstructionResources_OutUnusedResources;
	Parms.CallFunc_AddConstructionResources_OutAddedResources = CallFunc_AddConstructionResources_OutAddedResources;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue_3 = CallFunc_Greater_IntInt_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsSchematic_Info_Interface = K2Node_DynamicCast_AsSchematic_Info_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetTotalResourceRequirements_ReturnValue = CallFunc_GetTotalResourceRequirements_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ItemProxy.BP_ItemProxy_C.AddToStructureFeedback
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ItemProxy_DestroyedFeedback_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::AddToStructureFeedback(class UObject* Structure, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ItemProxy_DestroyedFeedback_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "AddToStructureFeedback");

	Params::ABP_ItemProxy_C_AddToStructureFeedback_Params Parms{};

	Parms.Structure = Structure;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy.BP_ItemProxy_C.Audio Event Loaded Roll Stop
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               AudioEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::Audio_Event_Loaded_Roll_Stop(class UAkAudioEvent* AudioEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "Audio Event Loaded Roll Stop");

	Params::ABP_ItemProxy_C_Audio_Event_Loaded_Roll_Stop_Params Parms{};

	Parms.AudioEvent = AudioEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy.BP_ItemProxy_C.Audio Event Loaded Roll Start
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               AudioEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::Audio_Event_Loaded_Roll_Start(class UAkAudioEvent* AudioEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "Audio Event Loaded Roll Start");

	Params::ABP_ItemProxy_C_Audio_Event_Loaded_Roll_Start_Params Parms{};

	Parms.AudioEvent = AudioEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy.BP_ItemProxy_C.Audio Event Loaded Impact
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               AudioEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::Audio_Event_Loaded_Impact(class UAkAudioEvent* AudioEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "Audio Event Loaded Impact");

	Params::ABP_ItemProxy_C_Audio_Event_Loaded_Impact_Params Parms{};

	Parms.AudioEvent = AudioEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy.BP_ItemProxy_C.LoadImpactAudioEvents
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UAkAudioEvent>TempSoftPath                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FItemAudioPhysics           PhysicsItemAudio                                                 (Edit, BlueprintVisible)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UScriptStruct*>       K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<class UScriptStruct*>       K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetItemTraitsFromEntry_Traits                           (None)
// TSoftObjectPtr<class UAkAudioEvent>CallFunc_ResolveTaggableSound_ReturnValue                        (UObjectWrapper, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetItemTraitsFromEntry_Traits_1                         (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>CallFunc_ResolveTaggableSound_ReturnValue_1                      (UObjectWrapper, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetItemTraitsFromEntry_Traits_2                         (None)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>CallFunc_ResolveTaggableSound_ReturnValue_2                      (UObjectWrapper, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetATRowAndColumnFromItemData_ATRow                     (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetATRowAndColumnFromItemData_ATColumn                  (NoDestructor, HasGetValueTypeHash)
// TArray<struct FAffinityTableCellDataWrapper>CallFunc_QueryTable_OutMemoryPtrs                                (ReferenceParm)
// bool                               CallFunc_QueryTable_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAffinityTableCellDataWrapper>CallFunc_QueryTable_OutMemoryPtrs_1                              (ReferenceParm)
// bool                               CallFunc_QueryTable_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemAudioPhysics           CallFunc_GetTableCellData_OutData                                (None)
// struct FItemAudioPhysics           CallFunc_GetTableCellData_OutData_1                              (None)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_MinTimeBetweenImpacts_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::LoadImpactAudioEvents(TSoftObjectPtr<class UAkAudioEvent> TempSoftPath, const struct FItemAudioPhysics& PhysicsItemAudio, bool CallFunc_IsDedicatedServer_ReturnValue, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, TArray<class UScriptStruct*>& K2Node_MakeArray_Array_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, const struct FGameplayTagContainer& CallFunc_GetItemTraitsFromEntry_Traits, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveTaggableSound_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetItemTraitsFromEntry_Traits_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveTaggableSound_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTagContainer& CallFunc_GetItemTraitsFromEntry_Traits_2, bool CallFunc_IsValidSoftObjectReference_ReturnValue_2, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveTaggableSound_ReturnValue_2, const struct FGameplayTag& CallFunc_GetATRowAndColumnFromItemData_ATRow, const struct FGameplayTag& CallFunc_GetATRowAndColumnFromItemData_ATColumn, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs_1, bool CallFunc_QueryTable_ReturnValue_1, const struct FItemAudioPhysics& CallFunc_GetTableCellData_OutData, const struct FItemAudioPhysics& CallFunc_GetTableCellData_OutData_1, bool CallFunc_MatchesTag_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, double K2Node_VariableSet_MinTimeBetweenImpacts_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "LoadImpactAudioEvents");

	Params::ABP_ItemProxy_C_LoadImpactAudioEvents_Params Parms{};

	Parms.TempSoftPath = TempSoftPath;
	Parms.PhysicsItemAudio = PhysicsItemAudio;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_1 = CallFunc_IsValidSoftObjectReference_ReturnValue_1;
	Parms.CallFunc_GetItemTraitsFromEntry_Traits = CallFunc_GetItemTraitsFromEntry_Traits;
	Parms.CallFunc_ResolveTaggableSound_ReturnValue = CallFunc_ResolveTaggableSound_ReturnValue;
	Parms.CallFunc_GetItemTraitsFromEntry_Traits_1 = CallFunc_GetItemTraitsFromEntry_Traits_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_ResolveTaggableSound_ReturnValue_1 = CallFunc_ResolveTaggableSound_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetItemTraitsFromEntry_Traits_2 = CallFunc_GetItemTraitsFromEntry_Traits_2;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_2 = CallFunc_IsValidSoftObjectReference_ReturnValue_2;
	Parms.CallFunc_ResolveTaggableSound_ReturnValue_2 = CallFunc_ResolveTaggableSound_ReturnValue_2;
	Parms.CallFunc_GetATRowAndColumnFromItemData_ATRow = CallFunc_GetATRowAndColumnFromItemData_ATRow;
	Parms.CallFunc_GetATRowAndColumnFromItemData_ATColumn = CallFunc_GetATRowAndColumnFromItemData_ATColumn;
	Parms.CallFunc_QueryTable_OutMemoryPtrs = CallFunc_QueryTable_OutMemoryPtrs;
	Parms.CallFunc_QueryTable_ReturnValue = CallFunc_QueryTable_ReturnValue;
	Parms.CallFunc_QueryTable_OutMemoryPtrs_1 = CallFunc_QueryTable_OutMemoryPtrs_1;
	Parms.CallFunc_QueryTable_ReturnValue_1 = CallFunc_QueryTable_ReturnValue_1;
	Parms.CallFunc_GetTableCellData_OutData = CallFunc_GetTableCellData_OutData;
	Parms.CallFunc_GetTableCellData_OutData_1 = CallFunc_GetTableCellData_OutData_1;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_VariableSet_MinTimeBetweenImpacts_ImplicitCast = K2Node_VariableSet_MinTimeBetweenImpacts_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy.BP_ItemProxy_C.SpawnShimmerEffect
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*           ParticleSystem                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            ItemQuality                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            CallFunc_GetItemQualityFromEntry_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_ByteToDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Get_Item_Quality_Colour_QualityColour_Linear            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_Get_Item_Quality_Colour_QualityColour_Slate__UI_        (None)
// double                             CallFunc_MakeLiteralDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeLiteralDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeLiteralDouble_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeLiteralDouble_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColor_Desaturated_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NVFX_Spawn_System_Attached_SpawnSuccessful              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_NVFX_Spawn_System_Attached_NiagaraSystemSpawned         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_LinearColorFloat_B_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LinearColor_Desaturated_InDesaturation_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::SpawnShimmerEffect(class UNiagaraComponent* ParticleSystem, enum class EItemQuality ItemQuality, enum class EItemQuality Temp_byte_Variable, enum class EItemQuality Temp_byte_Variable_1, enum class EItemQuality CallFunc_GetItemQualityFromEntry_ReturnValue, double CallFunc_Conv_ByteToDouble_ReturnValue, const struct FLinearColor& CallFunc_Get_Item_Quality_Colour_QualityColour_Linear, const struct FSlateColor& CallFunc_Get_Item_Quality_Colour_QualityColour_Slate__UI_, double CallFunc_MakeLiteralDouble_ReturnValue, double CallFunc_MakeLiteralDouble_ReturnValue_1, double CallFunc_MakeLiteralDouble_ReturnValue_2, double K2Node_Select_Default, double CallFunc_MakeLiteralDouble_ReturnValue_3, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, double K2Node_Select_Default_1, bool CallFunc_IsServer_ReturnValue, const struct FLinearColor& CallFunc_LinearColor_Desaturated_ReturnValue, const struct FVector& CallFunc_GetUpVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_NVFX_Spawn_System_Attached_SpawnSuccessful, class UNiagaraComponent* CallFunc_NVFX_Spawn_System_Attached_NiagaraSystemSpawned, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_Multiply_LinearColorFloat_B_ImplicitCast, float CallFunc_LinearColor_Desaturated_InDesaturation_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "SpawnShimmerEffect");

	Params::ABP_ItemProxy_C_SpawnShimmerEffect_Params Parms{};

	Parms.ParticleSystem = ParticleSystem;
	Parms.ItemQuality = ItemQuality;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetItemQualityFromEntry_ReturnValue = CallFunc_GetItemQualityFromEntry_ReturnValue;
	Parms.CallFunc_Conv_ByteToDouble_ReturnValue = CallFunc_Conv_ByteToDouble_ReturnValue;
	Parms.CallFunc_Get_Item_Quality_Colour_QualityColour_Linear = CallFunc_Get_Item_Quality_Colour_QualityColour_Linear;
	Parms.CallFunc_Get_Item_Quality_Colour_QualityColour_Slate__UI_ = CallFunc_Get_Item_Quality_Colour_QualityColour_Slate__UI_;
	Parms.CallFunc_MakeLiteralDouble_ReturnValue = CallFunc_MakeLiteralDouble_ReturnValue;
	Parms.CallFunc_MakeLiteralDouble_ReturnValue_1 = CallFunc_MakeLiteralDouble_ReturnValue_1;
	Parms.CallFunc_MakeLiteralDouble_ReturnValue_2 = CallFunc_MakeLiteralDouble_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeLiteralDouble_ReturnValue_3 = CallFunc_MakeLiteralDouble_ReturnValue_3;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue = CallFunc_Multiply_LinearColorFloat_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_LinearColor_Desaturated_ReturnValue = CallFunc_LinearColor_Desaturated_ReturnValue;
	Parms.CallFunc_GetUpVector_ReturnValue = CallFunc_GetUpVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_NVFX_Spawn_System_Attached_SpawnSuccessful = CallFunc_NVFX_Spawn_System_Attached_SpawnSuccessful;
	Parms.CallFunc_NVFX_Spawn_System_Attached_NiagaraSystemSpawned = CallFunc_NVFX_Spawn_System_Attached_NiagaraSystemSpawned;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast = CallFunc_SetFloatParameter_Param_ImplicitCast;
	Parms.CallFunc_Multiply_LinearColorFloat_B_ImplicitCast = CallFunc_Multiply_LinearColorFloat_B_ImplicitCast;
	Parms.CallFunc_LinearColor_Desaturated_InDesaturation_ImplicitCast = CallFunc_LinearColor_Desaturated_InDesaturation_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy.BP_ItemProxy_C.GetItemID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FItemDataReference          ItemId                                                           (Parm, OutParm, HasGetValueTypeHash)

void ABP_ItemProxy_C::GetItemID(struct FItemDataReference* ItemId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "GetItemID");

	Params::ABP_ItemProxy_C_GetItemID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemId != nullptr)
		*ItemId = std::move(Parms.ItemId);

}


// Function BP_ItemProxy.BP_ItemProxy_C.InitializeMesh
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 K2Node_DynamicCast_AsStatic_Mesh                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInstanceData_Traits        CallFunc_TryGetItemTraits_Traits                                 (None)
// enum class EGetResult              CallFunc_TryGetItemTraits_Branches                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::InitializeMesh(class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess, const struct FInstanceData_Traits& CallFunc_TryGetItemTraits_Traits, enum class EGetResult CallFunc_TryGetItemTraits_Branches, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_HasTag_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "InitializeMesh");

	Params::ABP_ItemProxy_C_InitializeMesh_Params Parms{};

	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsStatic_Mesh = K2Node_DynamicCast_AsStatic_Mesh;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_TryGetItemTraits_Traits = CallFunc_TryGetItemTraits_Traits;
	Parms.CallFunc_TryGetItemTraits_Branches = CallFunc_TryGetItemTraits_Branches;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy.BP_ItemProxy_C.InitializeItemProxy
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemName_ReturnValue                                 (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FInstanceData_Traits        CallFunc_TryGetItemTraits_Traits                                 (None)
// enum class EGetResult              CallFunc_TryGetItemTraits_Branches                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags                  (ReferenceParm)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::InitializeItemProxy(int32 Temp_int_Array_Index_Variable, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class FText CallFunc_GetItemName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FInstanceData_Traits& CallFunc_TryGetItemTraits_Traits, enum class EGetResult CallFunc_TryGetItemTraits_Branches, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "InitializeItemProxy");

	Params::ABP_ItemProxy_C_InitializeItemProxy_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetItemName_ReturnValue = CallFunc_GetItemName_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_TryGetItemTraits_Traits = CallFunc_TryGetItemTraits_Traits;
	Parms.CallFunc_TryGetItemTraits_Branches = CallFunc_TryGetItemTraits_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags = CallFunc_BreakGameplayTagContainer_GameplayTags;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy.BP_ItemProxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ItemProxy_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemProxy.BP_ItemProxy_C.PerformClientSideInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::PerformClientSideInteraction(class AController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "PerformClientSideInteraction");

	Params::ABP_ItemProxy_C_PerformClientSideInteraction_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy.BP_ItemProxy_C.CrossServerSendGameplayEventToActor
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTag                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          Payload                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ItemProxy_C::CrossServerSendGameplayEventToActor(struct FGameplayTag& EventTag, struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "CrossServerSendGameplayEventToActor");

	Params::ABP_ItemProxy_C_CrossServerSendGameplayEventToActor_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy.BP_ItemProxy_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         SleepingComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        BoneName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature(class UPrimitiveComponent* SleepingComponent, class FName BoneName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature");

	Params::ABP_ItemProxy_C_BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature_Params Parms{};

	Parms.SleepingComponent = SleepingComponent;
	Parms.BoneName = BoneName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy.BP_ItemProxy_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentWakeSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         WakingComponent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        BoneName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentWakeSignature__DelegateSignature(class UPrimitiveComponent* WakingComponent, class FName BoneName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentWakeSignature__DelegateSignature");

	Params::ABP_ItemProxy_C_BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentWakeSignature__DelegateSignature_Params Parms{};

	Parms.WakingComponent = WakingComponent;
	Parms.BoneName = BoneName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy.BP_ItemProxy_C.BndEvt__BP_ItemProxy_Mesh_K2Node_ComponentBoundEvent_8_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         HitComponent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NormalImpulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_ItemProxy_C::BndEvt__BP_ItemProxy_Mesh_K2Node_ComponentBoundEvent_8_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "BndEvt__BP_ItemProxy_Mesh_K2Node_ComponentBoundEvent_8_ComponentHitSignature__DelegateSignature");

	Params::ABP_ItemProxy_C_BndEvt__BP_ItemProxy_Mesh_K2Node_ComponentBoundEvent_8_ComponentHitSignature__DelegateSignature_Params Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy.BP_ItemProxy_C.BndEvt__BP_ItemProxy_Mesh_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_ItemProxy_C::BndEvt__BP_ItemProxy_Mesh_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "BndEvt__BP_ItemProxy_Mesh_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ABP_ItemProxy_C_BndEvt__BP_ItemProxy_Mesh_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy.BP_ItemProxy_C.BndEvt__BP_ItemProxy_Mesh_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::BndEvt__BP_ItemProxy_Mesh_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "BndEvt__BP_ItemProxy_Mesh_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	Params::ABP_ItemProxy_C_BndEvt__BP_ItemProxy_Mesh_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy.BP_ItemProxy_C.Client_PickUpWaterSplashSpawn
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     PickerViewLocation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::Client_PickUpWaterSplashSpawn(const struct FVector& PickerViewLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "Client_PickUpWaterSplashSpawn");

	Params::ABP_ItemProxy_C_Client_PickUpWaterSplashSpawn_Params Parms{};

	Parms.PickerViewLocation = PickerViewLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy.BP_ItemProxy_C.ExecuteUbergraph_BP_ItemProxy
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_1                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_1                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     K2Node_CustomEvent_PickerViewLocation                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_HitComponent                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_2                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_2                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_ComponentBoundEvent_NormalImpulse                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_ComponentBoundEvent_Hit                                   (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_WakingComponent                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_BoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_SleepingComponent                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_BoneName_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_EventTag                                            (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_Payload                                             (ConstParm)
// class AController*                 K2Node_Event_Controller                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SendGameplayEventToActor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_C::ExecuteUbergraph_BP_ItemProxy(int32 EntryPoint, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, const struct FVector& K2Node_CustomEvent_PickerViewLocation, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, class UPrimitiveComponent* K2Node_ComponentBoundEvent_WakingComponent, class FName K2Node_ComponentBoundEvent_BoneName, class UPrimitiveComponent* K2Node_ComponentBoundEvent_SleepingComponent, class FName K2Node_ComponentBoundEvent_BoneName_1, const struct FGameplayTag& K2Node_Event_EventTag, const struct FGameplayEventData& K2Node_Event_Payload, class AController* K2Node_Event_Controller, int32 CallFunc_SendGameplayEventToActor_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_C", "ExecuteUbergraph_BP_ItemProxy");

	Params::ABP_ItemProxy_C_ExecuteUbergraph_BP_ItemProxy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_1 = K2Node_ComponentBoundEvent_OverlappedComponent_1;
	Parms.K2Node_ComponentBoundEvent_OtherActor_1 = K2Node_ComponentBoundEvent_OtherActor_1;
	Parms.K2Node_ComponentBoundEvent_OtherComp_1 = K2Node_ComponentBoundEvent_OtherComp_1;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_1 = K2Node_ComponentBoundEvent_OtherBodyIndex_1;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_CustomEvent_PickerViewLocation = K2Node_CustomEvent_PickerViewLocation;
	Parms.K2Node_ComponentBoundEvent_HitComponent = K2Node_ComponentBoundEvent_HitComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor_2 = K2Node_ComponentBoundEvent_OtherActor_2;
	Parms.K2Node_ComponentBoundEvent_OtherComp_2 = K2Node_ComponentBoundEvent_OtherComp_2;
	Parms.K2Node_ComponentBoundEvent_NormalImpulse = K2Node_ComponentBoundEvent_NormalImpulse;
	Parms.K2Node_ComponentBoundEvent_Hit = K2Node_ComponentBoundEvent_Hit;
	Parms.K2Node_ComponentBoundEvent_WakingComponent = K2Node_ComponentBoundEvent_WakingComponent;
	Parms.K2Node_ComponentBoundEvent_BoneName = K2Node_ComponentBoundEvent_BoneName;
	Parms.K2Node_ComponentBoundEvent_SleepingComponent = K2Node_ComponentBoundEvent_SleepingComponent;
	Parms.K2Node_ComponentBoundEvent_BoneName_1 = K2Node_ComponentBoundEvent_BoneName_1;
	Parms.K2Node_Event_EventTag = K2Node_Event_EventTag;
	Parms.K2Node_Event_Payload = K2Node_Event_Payload;
	Parms.K2Node_Event_Controller = K2Node_Event_Controller;
	Parms.CallFunc_SendGameplayEventToActor_ReturnValue = CallFunc_SendGameplayEventToActor_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


