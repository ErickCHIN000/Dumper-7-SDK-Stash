#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_JigCharacterInterface.BP_JigCharacterInterface_C
// (None)

class UClass* IBP_JigCharacterInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_JigCharacterInterface_C");

	return Clss;
}


// BP_JigCharacterInterface_C BP_JigCharacterInterface.Default__BP_JigCharacterInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_JigCharacterInterface_C* IBP_JigCharacterInterface_C::GetDefaultObj()
{
	static class IBP_JigCharacterInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_JigCharacterInterface_C*>(IBP_JigCharacterInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_JigCharacterInterface.BP_JigCharacterInterface_C.OnClientDataRequested
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      ActionbarUIDs                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_JigCharacterInterface_C::OnClientDataRequested(TArray<int32>& ActionbarUIDs, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_JigCharacterInterface_C", "OnClientDataRequested");

	Params::IBP_JigCharacterInterface_C_OnClientDataRequested_Params Parms{};

	Parms.ActionbarUIDs = ActionbarUIDs;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_JigCharacterInterface.BP_JigCharacterInterface_C.OnSpecialContainerattachmentUpdated
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJSI_Slot_C*                 ItemRef                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_JigCharacterInterface_C::OnSpecialContainerattachmentUpdated(class UJSI_Slot_C* ItemRef, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_JigCharacterInterface_C", "OnSpecialContainerattachmentUpdated");

	Params::IBP_JigCharacterInterface_C_OnSpecialContainerattachmentUpdated_Params Parms{};

	Parms.ItemRef = ItemRef;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_JigCharacterInterface.BP_JigCharacterInterface_C.OnLoadSavedDataRequested
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_JigCharacterInterface_C::OnLoadSavedDataRequested(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_JigCharacterInterface_C", "OnLoadSavedDataRequested");

	Params::IBP_JigCharacterInterface_C_OnLoadSavedDataRequested_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_JigCharacterInterface.BP_JigCharacterInterface_C.OnInteractActorOverDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorRef                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_JigCharacterInterface_C::OnInteractActorOverDistance(class AActor* ActorRef, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_JigCharacterInterface_C", "OnInteractActorOverDistance");

	Params::IBP_JigCharacterInterface_C_OnInteractActorOverDistance_Params Parms{};

	Parms.ActorRef = ActorRef;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_JigCharacterInterface.BP_JigCharacterInterface_C.JigCheckWeaponAmmoCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_JigCharacterInterface_C::JigCheckWeaponAmmoCount(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_JigCharacterInterface_C", "JigCheckWeaponAmmoCount");

	Params::IBP_JigCharacterInterface_C_JigCheckWeaponAmmoCount_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_JigCharacterInterface.BP_JigCharacterInterface_C.GetAnimationInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayerSlots            ActiveSlot                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Leaning                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ADS                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Crouched                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsFirstPerson_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        WeaponID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_JigCharacterInterface_C::GetAnimationInfo(enum class EPlayerSlots* ActiveSlot, double* Leaning, bool* ADS, bool* Crouched, bool* IsFirstPerson_, class FName* WeaponID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_JigCharacterInterface_C", "GetAnimationInfo");

	Params::IBP_JigCharacterInterface_C_GetAnimationInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ActiveSlot != nullptr)
		*ActiveSlot = Parms.ActiveSlot;

	if (Leaning != nullptr)
		*Leaning = Parms.Leaning;

	if (ADS != nullptr)
		*ADS = Parms.ADS;

	if (Crouched != nullptr)
		*Crouched = Parms.Crouched;

	if (IsFirstPerson_ != nullptr)
		*IsFirstPerson_ = Parms.IsFirstPerson_;

	if (WeaponID != nullptr)
		*WeaponID = Parms.WeaponID;

}


// Function BP_JigCharacterInterface.BP_JigCharacterInterface_C.OnPickupInteractExecuted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      PickupRef                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_JigCharacterInterface_C::OnPickupInteractExecuted(class AActor* PickupRef, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_JigCharacterInterface_C", "OnPickupInteractExecuted");

	Params::IBP_JigCharacterInterface_C_OnPickupInteractExecuted_Params Parms{};

	Parms.PickupRef = PickupRef;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_JigCharacterInterface.BP_JigCharacterInterface_C.RequestServerData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_JigMultiplayer_C*        TargetComp                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_JigCharacterInterface_C::RequestServerData(class UBP_JigMultiplayer_C* TargetComp, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_JigCharacterInterface_C", "RequestServerData");

	Params::IBP_JigCharacterInterface_C_RequestServerData_Params Parms{};

	Parms.TargetComp = TargetComp;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_JigCharacterInterface.BP_JigCharacterInterface_C.AddJigWidgetToContent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 WidgetRef                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        ContentName                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_JigCharacterInterface_C::AddJigWidgetToContent(class UUserWidget* WidgetRef, class FText ContentName, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_JigCharacterInterface_C", "AddJigWidgetToContent");

	Params::IBP_JigCharacterInterface_C_AddJigWidgetToContent_Params Parms{};

	Parms.WidgetRef = WidgetRef;
	Parms.ContentName = ContentName;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}

}


