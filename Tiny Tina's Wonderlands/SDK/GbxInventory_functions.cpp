#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxInventory.InventoryAspectData
// (None)

class UClass* UInventoryAspectData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryAspectData");

	return Clss;
}


// InventoryAspectData GbxInventory.Default__InventoryAspectData
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryAspectData* UInventoryAspectData::GetDefaultObj()
{
	static class UInventoryAspectData* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryAspectData*>(UInventoryAspectData::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxInventory.InventoryAspectData.K2_OnBeginPlay
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                      InventoryActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInventoryBalanceStateComponent*InventoryBalanceState                                            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInventoryAspectData::K2_OnBeginPlay(class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryAspectData", "K2_OnBeginPlay");

	Params::UInventoryAspectData_K2_OnBeginPlay_Params Parms{};

	Parms.InventoryActor = InventoryActor;
	Parms.InventoryBalanceState = InventoryBalanceState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryAspectData.K2_OnApplyAspect
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                      InventoryActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInventoryBalanceStateComponent*InventoryBalanceState                                            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInventoryAspectData::K2_OnApplyAspect(class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryAspectData", "K2_OnApplyAspect");

	Params::UInventoryAspectData_K2_OnApplyAspect_Params Parms{};

	Parms.InventoryActor = InventoryActor;
	Parms.InventoryBalanceState = InventoryBalanceState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryAspectData.K2_GetFriendlyDescription
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UInventoryAspectData::K2_GetFriendlyDescription()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryAspectData", "K2_GetFriendlyDescription");

	Params::UInventoryAspectData_K2_GetFriendlyDescription_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryAspectData.K2_CloneAppearance
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                      CloneActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      InventoryActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInventoryBalanceStateComponent*InventoryBalanceState                                            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInventoryAspectData::K2_CloneAppearance(class AActor* CloneActor, class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryAspectData", "K2_CloneAppearance");

	Params::UInventoryAspectData_K2_CloneAppearance_Params Parms{};

	Parms.CloneActor = CloneActor;
	Parms.InventoryActor = InventoryActor;
	Parms.InventoryBalanceState = InventoryBalanceState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxInventory.InventoryBalanceStateComponent
// (None)

class UClass* UInventoryBalanceStateComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryBalanceStateComponent");

	return Clss;
}


// InventoryBalanceStateComponent GbxInventory.Default__InventoryBalanceStateComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryBalanceStateComponent* UInventoryBalanceStateComponent::GetDefaultObj()
{
	static class UInventoryBalanceStateComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryBalanceStateComponent*>(UInventoryBalanceStateComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxInventory.InventoryBalanceStateComponent.PostBeginPlay
// (Native, Protected)
// Parameters:

void UInventoryBalanceStateComponent::PostBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "PostBeginPlay");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryBalanceStateComponent.OnRep_ReplicatedUIStats
// (Final, Native, Protected)
// Parameters:

void UInventoryBalanceStateComponent::OnRep_ReplicatedUIStats()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "OnRep_ReplicatedUIStats");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryBalanceStateComponent.OnRep_AspectLevel
// (Final, Native, Protected)
// Parameters:

void UInventoryBalanceStateComponent::OnRep_AspectLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "OnRep_AspectLevel");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryBalanceStateComponent.NotifyUnequipped
// (Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                       OldInstigator                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInventoryBalanceStateComponent::NotifyUnequipped(class APawn* OldInstigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "NotifyUnequipped");

	Params::UInventoryBalanceStateComponent_NotifyUnequipped_Params Parms{};

	Parms.OldInstigator = OldInstigator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryBalanceStateComponent.NotifyEquipped
// (Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                       NewInstigator                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInventoryBalanceStateComponent::NotifyEquipped(class APawn* NewInstigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "NotifyEquipped");

	Params::UInventoryBalanceStateComponent_NotifyEquipped_Params Parms{};

	Parms.NewInstigator = NewInstigator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryBalanceStateComponent.NotifyAttached
// (Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                       Instigator                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInventoryBalanceStateComponent::NotifyAttached(class APawn* Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "NotifyAttached");

	Params::UInventoryBalanceStateComponent_NotifyAttached_Params Parms{};

	Parms.Instigator = Instigator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryBalanceStateComponent.K2_GetDamageType
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// TSubclassOf<class UGbxDamageType>  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UGbxDamageType> UInventoryBalanceStateComponent::K2_GetDamageType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "K2_GetDamageType");

	Params::UInventoryBalanceStateComponent_K2_GetDamageType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryBalanceStateComponent.IsManufactureredBy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UManufacturerData*           Manufacturer                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventoryBalanceStateComponent::IsManufactureredBy(class UManufacturerData* Manufacturer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "IsManufactureredBy");

	Params::UInventoryBalanceStateComponent_IsManufactureredBy_Params Parms{};

	Parms.Manufacturer = Manufacturer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryBalanceStateComponent.IsBeingReRolled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventoryBalanceStateComponent::IsBeingReRolled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "IsBeingReRolled");

	Params::UInventoryBalanceStateComponent_IsBeingReRolled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryBalanceStateComponent.GetReRollCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 UInventoryBalanceStateComponent::GetReRollCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "GetReRollCount");

	Params::UInventoryBalanceStateComponent_GetReRollCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryBalanceStateComponent.GetPartList
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UInventoryPartData*>  ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class UInventoryPartData*> UInventoryBalanceStateComponent::GetPartList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "GetPartList");

	Params::UInventoryBalanceStateComponent_GetPartList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryBalanceStateComponent.GetOverpowerLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInventoryBalanceStateComponent::GetOverpowerLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "GetOverpowerLevel");

	Params::UInventoryBalanceStateComponent_GetOverpowerLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryBalanceStateComponent.GetMonetaryValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInventoryBalanceStateComponent::GetMonetaryValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "GetMonetaryValue");

	Params::UInventoryBalanceStateComponent_GetMonetaryValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryBalanceStateComponent.GetManufacturer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UManufacturerData*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UManufacturerData* UInventoryBalanceStateComponent::GetManufacturer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "GetManufacturer");

	Params::UInventoryBalanceStateComponent_GetManufacturer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryScoreValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInventoryBalanceStateComponent::GetInventoryScoreValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "GetInventoryScoreValue");

	Params::UInventoryBalanceStateComponent_GetInventoryScoreValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLootBeamOverride
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UParticleSystem*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UParticleSystem* UInventoryBalanceStateComponent::GetInventoryRarityLootBeamOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "GetInventoryRarityLootBeamOverride");

	Params::UInventoryBalanceStateComponent_GetInventoryRarityLootBeamOverride_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLootBeamHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UInventoryBalanceStateComponent::GetInventoryRarityLootBeamHeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "GetInventoryRarityLootBeamHeight");

	Params::UInventoryBalanceStateComponent_GetInventoryRarityLootBeamHeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLootAudioStinger
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWwiseEvent*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWwiseEvent* UInventoryBalanceStateComponent::GetInventoryRarityLootAudioStinger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "GetInventoryRarityLootAudioStinger");

	Params::UInventoryBalanceStateComponent_GetInventoryRarityLootAudioStinger_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLifeSpanType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EDropLifeSpanType       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EDropLifeSpanType UInventoryBalanceStateComponent::GetInventoryRarityLifeSpanType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "GetInventoryRarityLifeSpanType");

	Params::UInventoryBalanceStateComponent_GetInventoryRarityLifeSpanType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLifeSpan
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UInventoryBalanceStateComponent::GetInventoryRarityLifeSpan()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "GetInventoryRarityLifeSpan");

	Params::UInventoryBalanceStateComponent_GetInventoryRarityLifeSpan_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityFrameName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UInventoryBalanceStateComponent::GetInventoryRarityFrameName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "GetInventoryRarityFrameName");

	Params::UInventoryBalanceStateComponent_GetInventoryRarityFrameName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

class FText UInventoryBalanceStateComponent::GetInventoryRarityDisplayName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "GetInventoryRarityDisplayName");

	Params::UInventoryBalanceStateComponent_GetInventoryRarityDisplayName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInventoryRarityData*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UInventoryRarityData* UInventoryBalanceStateComponent::GetInventoryRarityData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "GetInventoryRarityData");

	Params::UInventoryBalanceStateComponent_GetInventoryRarityData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityColorOutline
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UInventoryBalanceStateComponent::GetInventoryRarityColorOutline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "GetInventoryRarityColorOutline");

	Params::UInventoryBalanceStateComponent_GetInventoryRarityColorOutline_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityColorFX
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UInventoryBalanceStateComponent::GetInventoryRarityColorFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "GetInventoryRarityColorFX");

	Params::UInventoryBalanceStateComponent_GetInventoryRarityColorFX_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryDisplayRarityOutline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventoryBalanceStateComponent::GetInventoryDisplayRarityOutline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "GetInventoryDisplayRarityOutline");

	Params::UInventoryBalanceStateComponent_GetInventoryDisplayRarityOutline_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInventoryData*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UInventoryData* UInventoryBalanceStateComponent::GetInventoryData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "GetInventoryData");

	Params::UInventoryBalanceStateComponent_GetInventoryData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryBalanceData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInventoryBalanceData*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UInventoryBalanceData* UInventoryBalanceStateComponent::GetInventoryBalanceData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "GetInventoryBalanceData");

	Params::UInventoryBalanceStateComponent_GetInventoryBalanceData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryBalanceStateComponent.GetGenericPartList
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UInventoryGenericPartData*>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class UInventoryGenericPartData*> UInventoryBalanceStateComponent::GetGenericPartList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "GetGenericPartList");

	Params::UInventoryBalanceStateComponent_GetGenericPartList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryBalanceStateComponent.GetDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UInventoryBalanceStateComponent::GetDisplayName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "GetDisplayName");

	Params::UInventoryBalanceStateComponent_GetDisplayName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryBalanceStateComponent.GetDamageType
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UGbxDamageType>  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UGbxDamageType> UInventoryBalanceStateComponent::GetDamageType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "GetDamageType");

	Params::UInventoryBalanceStateComponent_GetDamageType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryBalanceStateComponent.GetCustomizationPartList
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UInventoryCustomizationPartData*>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class UInventoryCustomizationPartData*> UInventoryBalanceStateComponent::GetCustomizationPartList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "GetCustomizationPartList");

	Params::UInventoryBalanceStateComponent_GetCustomizationPartList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryBalanceStateComponent.CloneAppearance
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class AActor*                      DestActor                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             ParentComp                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAbsoluteScale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInventoryBalanceStateComponent::CloneAppearance(class AActor* DestActor, class USceneComponent* ParentComp, bool bAbsoluteScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "CloneAppearance");

	Params::UInventoryBalanceStateComponent_CloneAppearance_Params Parms{};

	Parms.DestActor = DestActor;
	Parms.ParentComp = ParentComp;
	Parms.bAbsoluteScale = bAbsoluteScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryBalanceStateComponent.ApplyPhysicalAspects
// (Native, Protected, BlueprintCallable)
// Parameters:

void UInventoryBalanceStateComponent::ApplyPhysicalAspects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "ApplyPhysicalAspects");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryBalanceStateComponent.ApplyGestaltMeshPartNames
// (Final, Native, Protected, BlueprintCallable, Const)
// Parameters:

void UInventoryBalanceStateComponent::ApplyGestaltMeshPartNames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBalanceStateComponent", "ApplyGestaltMeshPartNames");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxInventory.InventoryNamingStrategyData
// (None)

class UClass* UInventoryNamingStrategyData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryNamingStrategyData");

	return Clss;
}


// InventoryNamingStrategyData GbxInventory.Default__InventoryNamingStrategyData
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryNamingStrategyData* UInventoryNamingStrategyData::GetDefaultObj()
{
	static class UInventoryNamingStrategyData* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryNamingStrategyData*>(UInventoryNamingStrategyData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.InventoryBalanceData
// (None)

class UClass* UInventoryBalanceData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryBalanceData");

	return Clss;
}


// InventoryBalanceData GbxInventory.Default__InventoryBalanceData
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryBalanceData* UInventoryBalanceData::GetDefaultObj()
{
	static class UInventoryBalanceData* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryBalanceData*>(UInventoryBalanceData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.InventoryData
// (None)

class UClass* UInventoryData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryData");

	return Clss;
}


// InventoryData GbxInventory.Default__InventoryData
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryData* UInventoryData::GetDefaultObj()
{
	static class UInventoryData* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryData*>(UInventoryData::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxInventory.InventoryData.EnumeratePickupFlyToTargets
// (Final, Native, Public, HasOutParams, Const)
// Parameters:
// TArray<class FName>                Targets                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInventoryData::EnumeratePickupFlyToTargets(TArray<class FName>* Targets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryData", "EnumeratePickupFlyToTargets");

	Params::UInventoryData_EnumeratePickupFlyToTargets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Targets != nullptr)
		*Targets = std::move(Parms.Targets);

}


// Class GbxInventory.InventoryData_Simple
// (None)

class UClass* UInventoryData_Simple::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryData_Simple");

	return Clss;
}


// InventoryData_Simple GbxInventory.Default__InventoryData_Simple
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryData_Simple* UInventoryData_Simple::GetDefaultObj()
{
	static class UInventoryData_Simple* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryData_Simple*>(UInventoryData_Simple::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.InventoryListComponent
// (None)

class UClass* UInventoryListComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryListComponent");

	return Clss;
}


// InventoryListComponent GbxInventory.Default__InventoryListComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryListComponent* UInventoryListComponent::GetDefaultObj()
{
	static class UInventoryListComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryListComponent*>(UInventoryListComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxInventory.InventoryListComponent.SizeInInventory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AInventoryItemPickup*        PickupToTest                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInventoryListComponent::SizeInInventory(class AInventoryItemPickup* PickupToTest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "SizeInInventory");

	Params::UInventoryListComponent_SizeInInventory_Params Parms{};

	Parms.PickupToTest = PickupToTest;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryListComponent.ServerTransferItem
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FInventoryListEntryHandle   InventoryItemHandle                                              (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      DestinationActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Quantity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInventoryListComponent::ServerTransferItem(struct FInventoryListEntryHandle& InventoryItemHandle, class AActor* DestinationActor, int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "ServerTransferItem");

	Params::UInventoryListComponent_ServerTransferItem_Params Parms{};

	Parms.InventoryItemHandle = InventoryItemHandle;
	Parms.DestinationActor = DestinationActor;
	Parms.Quantity = Quantity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryListComponent.ServerSetItemUIFlags
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FInventoryListEntryHandle   Handle                                                           (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Flags                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              FlagsMask                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInventoryListComponent::ServerSetItemUIFlags(struct FInventoryListEntryHandle& Handle, uint8 Flags, uint8 FlagsMask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "ServerSetItemUIFlags");

	Params::UInventoryListComponent_ServerSetItemUIFlags_Params Parms{};

	Parms.Handle = Handle;
	Parms.Flags = Flags;
	Parms.FlagsMask = FlagsMask;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryListComponent.ServerSetItemsUIFlags
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class UInventoryCategoryData*      Category                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Flags                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              FlagsMask                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInventoryListComponent::ServerSetItemsUIFlags(class UInventoryCategoryData* Category, uint8 Flags, uint8 FlagsMask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "ServerSetItemsUIFlags");

	Params::UInventoryListComponent_ServerSetItemsUIFlags_Params Parms{};

	Parms.Category = Category;
	Parms.Flags = Flags;
	Parms.FlagsMask = FlagsMask;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryListComponent.ServerRemoveItem
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FInventoryListEntryHandle   InventoryItemHandle                                              (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInventoryListComponent::ServerRemoveItem(struct FInventoryListEntryHandle& InventoryItemHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "ServerRemoveItem");

	Params::UInventoryListComponent_ServerRemoveItem_Params Parms{};

	Parms.InventoryItemHandle = InventoryItemHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryListComponent.ServerRemoveCustomizationPartFromInventoryActor
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FInventoryListEntryHandle   InventoryItemHandle                                              (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInventoryCustomizationPartData*Part                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInventoryListComponent::ServerRemoveCustomizationPartFromInventoryActor(struct FInventoryListEntryHandle& InventoryItemHandle, class UInventoryCustomizationPartData* Part)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "ServerRemoveCustomizationPartFromInventoryActor");

	Params::UInventoryListComponent_ServerRemoveCustomizationPartFromInventoryActor_Params Parms{};

	Parms.InventoryItemHandle = InventoryItemHandle;
	Parms.Part = Part;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryListComponent.ServerDropItem
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FInventoryListEntryHandle   InventoryItemHandle                                              (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InitialLocation                                                  (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    InitialRotation                                                  (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UInventoryListComponent::ServerDropItem(struct FInventoryListEntryHandle& InventoryItemHandle, struct FVector& InitialLocation, struct FRotator& InitialRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "ServerDropItem");

	Params::UInventoryListComponent_ServerDropItem_Params Parms{};

	Parms.InventoryItemHandle = InventoryItemHandle;
	Parms.InitialLocation = InitialLocation;
	Parms.InitialRotation = InitialRotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryListComponent.ServerConsumeItem
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FInventoryListEntryHandle   InventoryItemHandle                                              (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Quantity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInventoryListComponent::ServerConsumeItem(struct FInventoryListEntryHandle& InventoryItemHandle, int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "ServerConsumeItem");

	Params::UInventoryListComponent_ServerConsumeItem_Params Parms{};

	Parms.InventoryItemHandle = InventoryItemHandle;
	Parms.Quantity = Quantity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryListComponent.ServerAddCustomizationPartToInventoryActor
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FInventoryListEntryHandle   InventoryItemHandle                                              (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInventoryCustomizationPartData*Part                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInventoryListComponent::ServerAddCustomizationPartToInventoryActor(struct FInventoryListEntryHandle& InventoryItemHandle, class UInventoryCustomizationPartData* Part)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "ServerAddCustomizationPartToInventoryActor");

	Params::UInventoryListComponent_ServerAddCustomizationPartToInventoryActor_Params Parms{};

	Parms.InventoryItemHandle = InventoryItemHandle;
	Parms.Part = Part;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryListComponent.IsInventoryFull
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventoryListComponent::IsInventoryFull()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "IsInventoryFull");

	Params::UInventoryListComponent_IsInventoryFull_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryListComponent.HasActorInList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      ItemActor                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventoryListComponent::HasActorInList(class AActor* ItemActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "HasActorInList");

	Params::UInventoryListComponent_HasActorInList_Params Parms{};

	Parms.ItemActor = ItemActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryListComponent.GetStoredInventoryActor
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInventoryListEntryHandle   InventoryItemHandle                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UInventoryListComponent::GetStoredInventoryActor(struct FInventoryListEntryHandle& InventoryItemHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "GetStoredInventoryActor");

	Params::UInventoryListComponent_GetStoredInventoryActor_Params Parms{};

	Parms.InventoryItemHandle = InventoryItemHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryListComponent.GetSelectedItemQuantity
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInventoryCategoryData*      ChildTypeToGet                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Quantity                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxQuantity                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInventoryListComponent::GetSelectedItemQuantity(class UInventoryCategoryData* ChildTypeToGet, int32* Quantity, int32* MaxQuantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "GetSelectedItemQuantity");

	Params::UInventoryListComponent_GetSelectedItemQuantity_Params Parms{};

	Parms.ChildTypeToGet = ChildTypeToGet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Quantity != nullptr)
		*Quantity = Parms.Quantity;

	if (MaxQuantity != nullptr)
		*MaxQuantity = Parms.MaxQuantity;

}


// Function GbxInventory.InventoryListComponent.GetMaxInventoryItems
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInventoryListComponent::GetMaxInventoryItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "GetMaxInventoryItems");

	Params::UInventoryListComponent_GetMaxInventoryItems_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryListComponent.GetItem
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInventoryListEntryHandle   InventoryItemHandle                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInventoryListEntry         ListEntry                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventoryListComponent::GetItem(struct FInventoryListEntryHandle& InventoryItemHandle, struct FInventoryListEntry* ListEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "GetItem");

	Params::UInventoryListComponent_GetItem_Params Parms{};

	Parms.InventoryItemHandle = InventoryItemHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ListEntry != nullptr)
		*ListEntry = std::move(Parms.ListEntry);

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryListComponent.GetInventoryListEntryDisplayName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInventoryListEntry         ListEntry                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UInventoryListComponent::GetInventoryListEntryDisplayName(struct FInventoryListEntry* ListEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "GetInventoryListEntryDisplayName");

	Params::UInventoryListComponent_GetInventoryListEntryDisplayName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ListEntry != nullptr)
		*ListEntry = std::move(Parms.ListEntry);

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryListComponent.GetInventoryListEntryDisplayDescription
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInventoryListEntry         ListEntry                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UInventoryListComponent::GetInventoryListEntryDisplayDescription(struct FInventoryListEntry* ListEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "GetInventoryListEntryDisplayDescription");

	Params::UInventoryListComponent_GetInventoryListEntryDisplayDescription_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ListEntry != nullptr)
		*ListEntry = std::move(Parms.ListEntry);

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryListComponent.GetInventoryItemCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInventoryListComponent::GetInventoryItemCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "GetInventoryItemCount");

	Params::UInventoryListComponent_GetInventoryItemCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryListComponent.GetInventoryHandlesOfType
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInventoryCategoryData*      ChildTypeToGet                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FInventoryListEntryHandle>ItemHandleList                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInventoryListComponent::GetInventoryHandlesOfType(class UInventoryCategoryData* ChildTypeToGet, TArray<struct FInventoryListEntryHandle>* ItemHandleList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "GetInventoryHandlesOfType");

	Params::UInventoryListComponent_GetInventoryHandlesOfType_Params Parms{};

	Parms.ChildTypeToGet = ChildTypeToGet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ItemHandleList != nullptr)
		*ItemHandleList = std::move(Parms.ItemHandleList);

}


// Function GbxInventory.InventoryListComponent.GetInventoryDisplayName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      InventoryActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UInventoryListComponent::GetInventoryDisplayName(class AActor* InventoryActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "GetInventoryDisplayName");

	Params::UInventoryListComponent_GetInventoryDisplayName_Params Parms{};

	Parms.InventoryActor = InventoryActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryListComponent.GetInventoryDisplayDescription
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      InventoryActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UInventoryListComponent::GetInventoryDisplayDescription(class AActor* InventoryActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "GetInventoryDisplayDescription");

	Params::UInventoryListComponent_GetInventoryDisplayDescription_Params Parms{};

	Parms.InventoryActor = InventoryActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryListComponent.GetCategoryOnlyInventoryHandles
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInventoryCategoryData*      ChildTypeToGet                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FInventoryListEntryHandle>ItemHandleList                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInventoryListComponent::GetCategoryOnlyInventoryHandles(class UInventoryCategoryData* ChildTypeToGet, TArray<struct FInventoryListEntryHandle>* ItemHandleList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "GetCategoryOnlyInventoryHandles");

	Params::UInventoryListComponent_GetCategoryOnlyInventoryHandles_Params Parms{};

	Parms.ChildTypeToGet = ChildTypeToGet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ItemHandleList != nullptr)
		*ItemHandleList = std::move(Parms.ItemHandleList);

}


// Function GbxInventory.InventoryListComponent.GetCategoryItemQuantity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInventoryCategoryData*      ItemCategory                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInventoryListComponent::GetCategoryItemQuantity(class UInventoryCategoryData* ItemCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "GetCategoryItemQuantity");

	Params::UInventoryListComponent_GetCategoryItemQuantity_Params Parms{};

	Parms.ItemCategory = ItemCategory;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryListComponent.GetAndConsumeSelected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInventoryCategoryData*      TypeToConsume                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Quantity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UInventoryListComponent::GetAndConsumeSelected(class UInventoryCategoryData* TypeToConsume, int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "GetAndConsumeSelected");

	Params::UInventoryListComponent_GetAndConsumeSelected_Params Parms{};

	Parms.TypeToConsume = TypeToConsume;
	Parms.Quantity = Quantity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryListComponent.GetAndConsumeItem
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInventoryListEntryHandle   InventoryItemHandle                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Quantity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UInventoryListComponent::GetAndConsumeItem(struct FInventoryListEntryHandle& InventoryItemHandle, int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "GetAndConsumeItem");

	Params::UInventoryListComponent_GetAndConsumeItem_Params Parms{};

	Parms.InventoryItemHandle = InventoryItemHandle;
	Parms.Quantity = Quantity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryListComponent.ClearInventory
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               DestroyInventory                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInventoryListComponent::ClearInventory(bool DestroyInventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "ClearInventory");

	Params::UInventoryListComponent_ClearInventory_Params Parms{};

	Parms.DestroyInventory = DestroyInventory;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryListComponent.CanUseSelected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInventoryCategoryData*      ChildTypeToUse                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Quantity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventoryListComponent::CanUseSelected(class UInventoryCategoryData* ChildTypeToUse, int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "CanUseSelected");

	Params::UInventoryListComponent_CanUseSelected_Params Parms{};

	Parms.ChildTypeToUse = ChildTypeToUse;
	Parms.Quantity = Quantity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryListComponent.CanSwapItemForPickup
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AInventoryItemPickup*        Pickup                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventoryListComponent::CanSwapItemForPickup(class AActor* Item, class AInventoryItemPickup* Pickup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "CanSwapItemForPickup");

	Params::UInventoryListComponent_CanSwapItemForPickup_Params Parms{};

	Parms.Item = Item;
	Parms.Pickup = Pickup;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryListComponent.AddOrUpdateCategoryOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInventoryCategoryData*      ItemCategory                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Quantity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInventoryListComponent::AddOrUpdateCategoryOnly(class UInventoryCategoryData* ItemCategory, int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "AddOrUpdateCategoryOnly");

	Params::UInventoryListComponent_AddOrUpdateCategoryOnly_Params Parms{};

	Parms.ItemCategory = ItemCategory;
	Parms.Quantity = Quantity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryListComponent.AddItemFromPickup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AInventoryItemPickup*        PickupActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInventoryListEntryHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FInventoryListEntryHandle UInventoryListComponent::AddItemFromPickup(class AInventoryItemPickup* PickupActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "AddItemFromPickup");

	Params::UInventoryListComponent_AddItemFromPickup_Params Parms{};

	Parms.PickupActor = PickupActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryListComponent.AddExternalItemEx
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInventoryCategoryData*      ItemCategory                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ActorToAdd                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Quantity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Flags                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bConditionalDestroyActor                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DesiredSlot                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bBypassInventoryFull                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              UIDataFlags                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInventoryListEntryHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FInventoryListEntryHandle UInventoryListComponent::AddExternalItemEx(class UInventoryCategoryData* ItemCategory, class AActor* ActorToAdd, int32 Quantity, int32 Flags, bool bConditionalDestroyActor, int32 DesiredSlot, bool bBypassInventoryFull, uint8 UIDataFlags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "AddExternalItemEx");

	Params::UInventoryListComponent_AddExternalItemEx_Params Parms{};

	Parms.ItemCategory = ItemCategory;
	Parms.ActorToAdd = ActorToAdd;
	Parms.Quantity = Quantity;
	Parms.Flags = Flags;
	Parms.bConditionalDestroyActor = bConditionalDestroyActor;
	Parms.DesiredSlot = DesiredSlot;
	Parms.bBypassInventoryFull = bBypassInventoryFull;
	Parms.UIDataFlags = UIDataFlags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryListComponent.AddExternalItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInventoryCategoryData*      ItemCategory                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ActorToAdd                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Quantity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AddedByPickup                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAutoEquip                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bConditionalDestroyActor                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DesiredSlot                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bBypassInventoryFull                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              UIDataFlags                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInventoryListEntryHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FInventoryListEntryHandle UInventoryListComponent::AddExternalItem(class UInventoryCategoryData* ItemCategory, class AActor* ActorToAdd, int32 Quantity, bool AddedByPickup, bool bAutoEquip, bool bConditionalDestroyActor, int32 DesiredSlot, bool bBypassInventoryFull, uint8 UIDataFlags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "AddExternalItem");

	Params::UInventoryListComponent_AddExternalItem_Params Parms{};

	Parms.ItemCategory = ItemCategory;
	Parms.ActorToAdd = ActorToAdd;
	Parms.Quantity = Quantity;
	Parms.AddedByPickup = AddedByPickup;
	Parms.bAutoEquip = bAutoEquip;
	Parms.bConditionalDestroyActor = bConditionalDestroyActor;
	Parms.DesiredSlot = DesiredSlot;
	Parms.bBypassInventoryFull = bBypassInventoryFull;
	Parms.UIDataFlags = UIDataFlags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryListComponent.AddCategory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInventoryCategoryData*      ItemCategory                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TrackQuantity                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventoryListComponent::AddCategory(class UInventoryCategoryData* ItemCategory, bool TrackQuantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryListComponent", "AddCategory");

	Params::UInventoryListComponent_AddCategory_Params Parms{};

	Parms.ItemCategory = ItemCategory;
	Parms.TrackQuantity = TrackQuantity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxInventory.DownloadableInventorySetData
// (None)

class UClass* UDownloadableInventorySetData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DownloadableInventorySetData");

	return Clss;
}


// DownloadableInventorySetData GbxInventory.Default__DownloadableInventorySetData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDownloadableInventorySetData* UDownloadableInventorySetData::GetDefaultObj()
{
	static class UDownloadableInventorySetData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDownloadableInventorySetData*>(UDownloadableInventorySetData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.InventoryCustomizationPartData
// (None)

class UClass* UInventoryCustomizationPartData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryCustomizationPartData");

	return Clss;
}


// InventoryCustomizationPartData GbxInventory.Default__InventoryCustomizationPartData
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryCustomizationPartData* UInventoryCustomizationPartData::GetDefaultObj()
{
	static class UInventoryCustomizationPartData* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryCustomizationPartData*>(UInventoryCustomizationPartData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.InventoryItemPickup
// (Actor)

class UClass* AInventoryItemPickup::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryItemPickup");

	return Clss;
}


// InventoryItemPickup GbxInventory.Default__InventoryItemPickup
// (Public, ClassDefaultObject, ArchetypeObject)

class AInventoryItemPickup* AInventoryItemPickup::GetDefaultObj()
{
	static class AInventoryItemPickup* Default = nullptr;

	if (!Default)
		Default = static_cast<AInventoryItemPickup*>(AInventoryItemPickup::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxInventory.InventoryItemPickup.WaitForBalanceState
// (Final, Native, Private)
// Parameters:

void AInventoryItemPickup::WaitForBalanceState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryItemPickup", "WaitForBalanceState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryItemPickup.SetCanOnlyBePickedUpByOwner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewCanOnlyBePickedUpByOwnerController                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                 OwnerController                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AInventoryItemPickup::SetCanOnlyBePickedUpByOwner(bool bNewCanOnlyBePickedUpByOwnerController, class AController* OwnerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryItemPickup", "SetCanOnlyBePickedUpByOwner");

	Params::AInventoryItemPickup_SetCanOnlyBePickedUpByOwner_Params Parms{};

	Parms.bNewCanOnlyBePickedUpByOwnerController = bNewCanOnlyBePickedUpByOwnerController;
	Parms.OwnerController = OwnerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryItemPickup.ResetBumpOnPickupFail
// (Final, Native, Private)
// Parameters:

void AInventoryItemPickup::ResetBumpOnPickupFail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryItemPickup", "ResetBumpOnPickupFail");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryItemPickup.OnUsedBy
// (Native, Public, HasOutParams)
// Parameters:
// struct FUseEvent                   UseEvent                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void AInventoryItemPickup::OnUsedBy(struct FUseEvent& UseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryItemPickup", "OnUsedBy");

	Params::AInventoryItemPickup_OnUsedBy_Params Parms{};

	Parms.UseEvent = UseEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryItemPickup.OnRespawnEvent
// (Event, Public, BlueprintEvent)
// Parameters:

void AInventoryItemPickup::OnRespawnEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryItemPickup", "OnRespawnEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxInventory.InventoryItemPickup.OnRep_RepLootSpawnAction
// (Final, Native, Private)
// Parameters:

void AInventoryItemPickup::OnRep_RepLootSpawnAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryItemPickup", "OnRep_RepLootSpawnAction");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryItemPickup.OnRep_PickupActorClientSpawnData
// (Native, Public)
// Parameters:

void AInventoryItemPickup::OnRep_PickupActorClientSpawnData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryItemPickup", "OnRep_PickupActorClientSpawnData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryItemPickup.OnRep_PickupActor
// (Final, Native, Public)
// Parameters:

void AInventoryItemPickup::OnRep_PickupActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryItemPickup", "OnRep_PickupActor");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryItemPickup.OnRep_PickedUpBy
// (Native, Public)
// Parameters:

void AInventoryItemPickup::OnRep_PickedUpBy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryItemPickup", "OnRep_PickedUpBy");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryItemPickup.OnRep_IsActive
// (Native, Public)
// Parameters:

void AInventoryItemPickup::OnRep_IsActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryItemPickup", "OnRep_IsActive");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryItemPickup.OnRep_BumpAngularDir
// (Native, Protected)
// Parameters:

void AInventoryItemPickup::OnRep_BumpAngularDir()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryItemPickup", "OnRep_BumpAngularDir");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryItemPickup.OnPickedUpEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      WasPickedUpBy                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AInventoryItemPickup::OnPickedUpEvent(class AActor* WasPickedUpBy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryItemPickup", "OnPickedUpEvent");

	Params::AInventoryItemPickup_OnPickedUpEvent_Params Parms{};

	Parms.WasPickedUpBy = WasPickedUpBy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxInventory.InventoryItemPickup.OnLookedAtByPlayer
// (Native, Public, HasDefaults)
// Parameters:
// class APlayerController*           InstigatingPlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCanInteractWith                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NewUsableComponentImpactPoint                                    (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewUsableDistanceAway                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AInventoryItemPickup::OnLookedAtByPlayer(class APlayerController* InstigatingPlayer, bool bCanInteractWith, const struct FVector& NewUsableComponentImpactPoint, float NewUsableDistanceAway)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryItemPickup", "OnLookedAtByPlayer");

	Params::AInventoryItemPickup_OnLookedAtByPlayer_Params Parms{};

	Parms.InstigatingPlayer = InstigatingPlayer;
	Parms.bCanInteractWith = bCanInteractWith;
	Parms.NewUsableComponentImpactPoint = NewUsableComponentImpactPoint;
	Parms.NewUsableDistanceAway = NewUsableDistanceAway;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryItemPickup.IsPickupInitialized
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AInventoryItemPickup::IsPickupInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryItemPickup", "IsPickupInitialized");

	Params::AInventoryItemPickup_IsPickupInitialized_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryItemPickup.GiveInventoryToUser
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Other                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAutoEquip                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DesiredSlot                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AInventoryItemPickup::GiveInventoryToUser(class AActor* Other, bool bAutoEquip, int32 DesiredSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryItemPickup", "GiveInventoryToUser");

	Params::AInventoryItemPickup_GiveInventoryToUser_Params Parms{};

	Parms.Other = Other;
	Parms.bAutoEquip = bAutoEquip;
	Parms.DesiredSlot = DesiredSlot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryItemPickup.GetMeshComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMeshComponent*              ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMeshComponent* AInventoryItemPickup::GetMeshComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryItemPickup", "GetMeshComponent");

	Params::AInventoryItemPickup_GetMeshComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryItemPickup.GetInventoryRarityLootBeamOverride
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UParticleSystem*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UParticleSystem* AInventoryItemPickup::GetInventoryRarityLootBeamOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryItemPickup", "GetInventoryRarityLootBeamOverride");

	Params::AInventoryItemPickup_GetInventoryRarityLootBeamOverride_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryItemPickup.GetInventoryRarityLootAudioStinger
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWwiseEvent*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWwiseEvent* AInventoryItemPickup::GetInventoryRarityLootAudioStinger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryItemPickup", "GetInventoryRarityLootAudioStinger");

	Params::AInventoryItemPickup_GetInventoryRarityLootAudioStinger_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryItemPickup.GetInventoryRarityLifeSpanType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EDropLifeSpanType       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EDropLifeSpanType AInventoryItemPickup::GetInventoryRarityLifeSpanType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryItemPickup", "GetInventoryRarityLifeSpanType");

	Params::AInventoryItemPickup_GetInventoryRarityLifeSpanType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryItemPickup.GetInventoryRarityColorOutline
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor AInventoryItemPickup::GetInventoryRarityColorOutline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryItemPickup", "GetInventoryRarityColorOutline");

	Params::AInventoryItemPickup_GetInventoryRarityColorOutline_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryItemPickup.GetInventoryRarityColorFX
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor AInventoryItemPickup::GetInventoryRarityColorFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryItemPickup", "GetInventoryRarityColorFX");

	Params::AInventoryItemPickup_GetInventoryRarityColorFX_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryItemPickup.GetInventoryDisplayRarityOutline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AInventoryItemPickup::GetInventoryDisplayRarityOutline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryItemPickup", "GetInventoryDisplayRarityOutline");

	Params::AInventoryItemPickup_GetInventoryDisplayRarityOutline_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryItemPickup.GetInventoryBalanceStateComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInventoryBalanceStateComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UInventoryBalanceStateComponent* AInventoryItemPickup::GetInventoryBalanceStateComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryItemPickup", "GetInventoryBalanceStateComponent");

	Params::AInventoryItemPickup_GetInventoryBalanceStateComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryItemPickup.DeactivatePickup
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AInventoryItemPickup::DeactivatePickup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryItemPickup", "DeactivatePickup");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryItemPickup.CanBePickedUp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Other                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               UsedByOther                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseHeld                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForMassPickup                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AInventoryItemPickup::CanBePickedUp(class AActor* Other, bool UsedByOther, bool bUseHeld, bool bForMassPickup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryItemPickup", "CanBePickedUp");

	Params::AInventoryItemPickup_CanBePickedUp_Params Parms{};

	Parms.Other = Other;
	Parms.UsedByOther = UsedByOther;
	Parms.bUseHeld = bUseHeld;
	Parms.bForMassPickup = bForMassPickup;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryItemPickup.ActivatePickup
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AInventoryItemPickup::ActivatePickup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryItemPickup", "ActivatePickup");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.InventoryItemPickup.ActivateAfterSpawnDelay
// (Native, Public, BlueprintCallable)
// Parameters:

void AInventoryItemPickup::ActivateAfterSpawnDelay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryItemPickup", "ActivateAfterSpawnDelay");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxInventory.DroppedInventoryItemPickup
// (Actor)

class UClass* ADroppedInventoryItemPickup::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DroppedInventoryItemPickup");

	return Clss;
}


// DroppedInventoryItemPickup GbxInventory.Default__DroppedInventoryItemPickup
// (Public, ClassDefaultObject, ArchetypeObject)

class ADroppedInventoryItemPickup* ADroppedInventoryItemPickup::GetDefaultObj()
{
	static class ADroppedInventoryItemPickup* Default = nullptr;

	if (!Default)
		Default = static_cast<ADroppedInventoryItemPickup*>(ADroppedInventoryItemPickup::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxInventory.DroppedInventoryItemPickup.OnRep_ShrinkLifeSpan
// (Final, Native, Public)
// Parameters:

void ADroppedInventoryItemPickup::OnRep_ShrinkLifeSpan()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroppedInventoryItemPickup", "OnRep_ShrinkLifeSpan");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.DroppedInventoryItemPickup.OnRep_InitialMassScale
// (Final, Native, Public)
// Parameters:

void ADroppedInventoryItemPickup::OnRep_InitialMassScale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroppedInventoryItemPickup", "OnRep_InitialMassScale");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.DroppedInventoryItemPickup.OnRep_DroppedQuantity
// (Final, Native, Public)
// Parameters:

void ADroppedInventoryItemPickup::OnRep_DroppedQuantity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroppedInventoryItemPickup", "OnRep_DroppedQuantity");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.DroppedInventoryItemPickup.OnPickupHit
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// class UPrimitiveComponent*         HitComponent                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NormalImpulse                                                    (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ADroppedInventoryItemPickup::OnPickupHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroppedInventoryItemPickup", "OnPickupHit");

	Params::ADroppedInventoryItemPickup_OnPickupHit_Params Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.DroppedInventoryItemPickup.OnPhysicsWake
// (Final, Native, Private)
// Parameters:
// class UPrimitiveComponent*         WakingComponent                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADroppedInventoryItemPickup::OnPhysicsWake(class UPrimitiveComponent* WakingComponent, class FName BoneName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroppedInventoryItemPickup", "OnPhysicsWake");

	Params::ADroppedInventoryItemPickup_OnPhysicsWake_Params Parms{};

	Parms.WakingComponent = WakingComponent;
	Parms.BoneName = BoneName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.DroppedInventoryItemPickup.OnPhysicsSleep
// (Final, Native, Private)
// Parameters:
// class UPrimitiveComponent*         WakingComponent                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADroppedInventoryItemPickup::OnPhysicsSleep(class UPrimitiveComponent* WakingComponent, class FName BoneName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroppedInventoryItemPickup", "OnPhysicsSleep");

	Params::ADroppedInventoryItemPickup_OnPhysicsSleep_Params Parms{};

	Parms.WakingComponent = WakingComponent;
	Parms.BoneName = BoneName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxInventory.InventoryPartData
// (None)

class UClass* UInventoryPartData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryPartData");

	return Clss;
}


// InventoryPartData GbxInventory.Default__InventoryPartData
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryPartData* UInventoryPartData::GetDefaultObj()
{
	static class UInventoryPartData* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryPartData*>(UInventoryPartData::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxInventory.InventoryPartData.GetMonetaryValueModifier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAttributeInitializationDataReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

struct FAttributeInitializationData UInventoryPartData::GetMonetaryValueModifier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryPartData", "GetMonetaryValueModifier");

	Params::UInventoryPartData_GetMonetaryValueModifier_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxInventory.InventoryGenericPartData
// (None)

class UClass* UInventoryGenericPartData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryGenericPartData");

	return Clss;
}


// InventoryGenericPartData GbxInventory.Default__InventoryGenericPartData
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryGenericPartData* UInventoryGenericPartData::GetDefaultObj()
{
	static class UInventoryGenericPartData* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryGenericPartData*>(UInventoryGenericPartData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.InventoryRarityData
// (None)

class UClass* UInventoryRarityData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryRarityData");

	return Clss;
}


// InventoryRarityData GbxInventory.Default__InventoryRarityData
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryRarityData* UInventoryRarityData::GetDefaultObj()
{
	static class UInventoryRarityData* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryRarityData*>(UInventoryRarityData::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxInventory.InventoryRarityData.GetRaritySortValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInventoryRarityData::GetRaritySortValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryRarityData", "GetRaritySortValue");

	Params::UInventoryRarityData_GetRaritySortValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryRarityData.GetRarityOutlineDepthStencilValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInventoryRarityData::GetRarityOutlineDepthStencilValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryRarityData", "GetRarityOutlineDepthStencilValue");

	Params::UInventoryRarityData_GetRarityOutlineDepthStencilValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryRarityData.GetRarityLootBeamOverride
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bInventoryHasAFoilPart                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInventoryHasOverpowerLevel                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UParticleSystem*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UParticleSystem* UInventoryRarityData::GetRarityLootBeamOverride(bool bInventoryHasAFoilPart, bool bInventoryHasOverpowerLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryRarityData", "GetRarityLootBeamOverride");

	Params::UInventoryRarityData_GetRarityLootBeamOverride_Params Parms{};

	Parms.bInventoryHasAFoilPart = bInventoryHasAFoilPart;
	Parms.bInventoryHasOverpowerLevel = bInventoryHasOverpowerLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryRarityData.GetRarityLootBeamHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UInventoryRarityData::GetRarityLootBeamHeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryRarityData", "GetRarityLootBeamHeight");

	Params::UInventoryRarityData_GetRarityLootBeamHeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryRarityData.GetRarityLootAudioStinger
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bInventoryHasOverpowerLevel                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWwiseEvent*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWwiseEvent* UInventoryRarityData::GetRarityLootAudioStinger(bool bInventoryHasOverpowerLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryRarityData", "GetRarityLootAudioStinger");

	Params::UInventoryRarityData_GetRarityLootAudioStinger_Params Parms{};

	Parms.bInventoryHasOverpowerLevel = bInventoryHasOverpowerLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryRarityData.GetRarityLifeSpanType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EDropLifeSpanType       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EDropLifeSpanType UInventoryRarityData::GetRarityLifeSpanType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryRarityData", "GetRarityLifeSpanType");

	Params::UInventoryRarityData_GetRarityLifeSpanType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryRarityData.GetRarityLifeSpan
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UInventoryRarityData::GetRarityLifeSpan()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryRarityData", "GetRarityLifeSpan");

	Params::UInventoryRarityData_GetRarityLifeSpan_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryRarityData.GetRarityIdentifier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UInventoryRarityData::GetRarityIdentifier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryRarityData", "GetRarityIdentifier");

	Params::UInventoryRarityData_GetRarityIdentifier_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryRarityData.GetRarityFrameName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UInventoryRarityData::GetRarityFrameName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryRarityData", "GetRarityFrameName");

	Params::UInventoryRarityData_GetRarityFrameName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryRarityData.GetRarityDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

class FText UInventoryRarityData::GetRarityDisplayName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryRarityData", "GetRarityDisplayName");

	Params::UInventoryRarityData_GetRarityDisplayName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryRarityData.GetRarityColorOutline
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UInventoryRarityData::GetRarityColorOutline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryRarityData", "GetRarityColorOutline");

	Params::UInventoryRarityData_GetRarityColorOutline_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryRarityData.GetRarityColorFX
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UInventoryRarityData::GetRarityColorFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryRarityData", "GetRarityColorFX");

	Params::UInventoryRarityData_GetRarityColorFX_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryRarityData.GetItemScoreRarityModifier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAttributeInitializationDataReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

struct FAttributeInitializationData UInventoryRarityData::GetItemScoreRarityModifier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryRarityData", "GetItemScoreRarityModifier");

	Params::UInventoryRarityData_GetItemScoreRarityModifier_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryRarityData.GetDisplayRarityOutline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventoryRarityData::GetDisplayRarityOutline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryRarityData", "GetDisplayRarityOutline");

	Params::UInventoryRarityData_GetDisplayRarityOutline_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxInventory.LootableComponent
// (None)

class UClass* ULootableComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootableComponent");

	return Clss;
}


// LootableComponent GbxInventory.Default__LootableComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULootableComponent* ULootableComponent::GetDefaultObj()
{
	static class ULootableComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootableComponent*>(ULootableComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxInventory.LootableComponent.SpawnAndDropLoot
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SelectedConfigurationName                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULootableComponent::SpawnAndDropLoot(class FName* SelectedConfigurationName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootableComponent", "SpawnAndDropLoot");

	Params::ULootableComponent_SpawnAndDropLoot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SelectedConfigurationName != nullptr)
		*SelectedConfigurationName = Parms.SelectedConfigurationName;

}


// Function GbxInventory.LootableComponent.SpawnAndAttachLoot
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SelectedConfigurationName                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULootableComponent::SpawnAndAttachLoot(class FName* SelectedConfigurationName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootableComponent", "SpawnAndAttachLoot");

	Params::ULootableComponent_SpawnAndAttachLoot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SelectedConfigurationName != nullptr)
		*SelectedConfigurationName = Parms.SelectedConfigurationName;

}


// Function GbxInventory.LootableComponent.SetBalanceContextOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      NewOverrideContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOnlyUseForGameStage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULootableComponent::SetBalanceContextOverride(class AActor* NewOverrideContext, bool bOnlyUseForGameStage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootableComponent", "SetBalanceContextOverride");

	Params::ULootableComponent_SetBalanceContextOverride_Params Parms{};

	Parms.NewOverrideContext = NewOverrideContext;
	Parms.bOnlyUseForGameStage = bOnlyUseForGameStage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.LootableComponent.InitializeLootConfigurations
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class ULootableBalanceData*        LootableBalanceData                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULootableComponent::InitializeLootConfigurations(class ULootableBalanceData* LootableBalanceData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootableComponent", "InitializeLootConfigurations");

	Params::ULootableComponent_InitializeLootConfigurations_Params Parms{};

	Parms.LootableBalanceData = LootableBalanceData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxInventory.LootableComponent.GetAttachedPickups
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class ADroppedInventoryItemPickup*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class ADroppedInventoryItemPickup*> ULootableComponent::GetAttachedPickups()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootableComponent", "GetAttachedPickups");

	Params::ULootableComponent_GetAttachedPickups_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.LootableComponent.ActivateAttachedLoot
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void ULootableComponent::ActivateAttachedLoot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootableComponent", "ActivateAttachedLoot");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxInventory.ManufacturerData
// (None)

class UClass* UManufacturerData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManufacturerData");

	return Clss;
}


// ManufacturerData GbxInventory.Default__ManufacturerData
// (Public, ClassDefaultObject, ArchetypeObject)

class UManufacturerData* UManufacturerData::GetDefaultObj()
{
	static class UManufacturerData* Default = nullptr;

	if (!Default)
		Default = static_cast<UManufacturerData*>(UManufacturerData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.ItemPoolListInterface
// (None)

class UClass* UItemPoolListInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemPoolListInterface");

	return Clss;
}


// ItemPoolListInterface GbxInventory.Default__ItemPoolListInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UItemPoolListInterface* UItemPoolListInterface::GetDefaultObj()
{
	static class UItemPoolListInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemPoolListInterface*>(UItemPoolListInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.ItemPoolData
// (None)

class UClass* UItemPoolData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemPoolData");

	return Clss;
}


// ItemPoolData GbxInventory.Default__ItemPoolData
// (Public, ClassDefaultObject, ArchetypeObject)

class UItemPoolData* UItemPoolData::GetDefaultObj()
{
	static class UItemPoolData* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemPoolData*>(UItemPoolData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.InventoryMaterialAspectData
// (None)

class UClass* UInventoryMaterialAspectData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryMaterialAspectData");

	return Clss;
}


// InventoryMaterialAspectData GbxInventory.Default__InventoryMaterialAspectData
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryMaterialAspectData* UInventoryMaterialAspectData::GetDefaultObj()
{
	static class UInventoryMaterialAspectData* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryMaterialAspectData*>(UInventoryMaterialAspectData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.InventoryPartSetData
// (None)

class UClass* UInventoryPartSetData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryPartSetData");

	return Clss;
}


// InventoryPartSetData GbxInventory.Default__InventoryPartSetData
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryPartSetData* UInventoryPartSetData::GetDefaultObj()
{
	static class UInventoryPartSetData* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryPartSetData*>(UInventoryPartSetData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.InventoryAttributeEffectsAspectData
// (None)

class UClass* UInventoryAttributeEffectsAspectData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryAttributeEffectsAspectData");

	return Clss;
}


// InventoryAttributeEffectsAspectData GbxInventory.Default__InventoryAttributeEffectsAspectData
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryAttributeEffectsAspectData* UInventoryAttributeEffectsAspectData::GetDefaultObj()
{
	static class UInventoryAttributeEffectsAspectData* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryAttributeEffectsAspectData*>(UInventoryAttributeEffectsAspectData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.GbxCondition_InventoryRarityComparison
// (None)

class UClass* UGbxCondition_InventoryRarityComparison::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxCondition_InventoryRarityComparison");

	return Clss;
}


// GbxCondition_InventoryRarityComparison GbxInventory.Default__GbxCondition_InventoryRarityComparison
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxCondition_InventoryRarityComparison* UGbxCondition_InventoryRarityComparison::GetDefaultObj()
{
	static class UGbxCondition_InventoryRarityComparison* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxCondition_InventoryRarityComparison*>(UGbxCondition_InventoryRarityComparison::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.GearBuilderCategoryData
// (None)

class UClass* UGearBuilderCategoryData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GearBuilderCategoryData");

	return Clss;
}


// GearBuilderCategoryData GbxInventory.Default__GearBuilderCategoryData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGearBuilderCategoryData* UGearBuilderCategoryData::GetDefaultObj()
{
	static class UGearBuilderCategoryData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGearBuilderCategoryData*>(UGearBuilderCategoryData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.GearBuilderWidget
// (None)

class UClass* UGearBuilderWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GearBuilderWidget");

	return Clss;
}


// GearBuilderWidget GbxInventory.Default__GearBuilderWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UGearBuilderWidget* UGearBuilderWidget::GetDefaultObj()
{
	static class UGearBuilderWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UGearBuilderWidget*>(UGearBuilderWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.GearBuilderDebugMenu
// (None)

class UClass* UGearBuilderDebugMenu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GearBuilderDebugMenu");

	return Clss;
}


// GearBuilderDebugMenu GbxInventory.Default__GearBuilderDebugMenu
// (Public, ClassDefaultObject, ArchetypeObject)

class UGearBuilderDebugMenu* UGearBuilderDebugMenu::GetDefaultObj()
{
	static class UGearBuilderDebugMenu* Default = nullptr;

	if (!Default)
		Default = static_cast<UGearBuilderDebugMenu*>(UGearBuilderDebugMenu::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.InventoryBalanceCollectionData
// (None)

class UClass* UInventoryBalanceCollectionData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryBalanceCollectionData");

	return Clss;
}


// InventoryBalanceCollectionData GbxInventory.Default__InventoryBalanceCollectionData
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryBalanceCollectionData* UInventoryBalanceCollectionData::GetDefaultObj()
{
	static class UInventoryBalanceCollectionData* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryBalanceCollectionData*>(UInventoryBalanceCollectionData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.InventoryBalanceData_Generated
// (None)

class UClass* UInventoryBalanceData_Generated::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryBalanceData_Generated");

	return Clss;
}


// InventoryBalanceData_Generated GbxInventory.Default__InventoryBalanceData_Generated
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryBalanceData_Generated* UInventoryBalanceData_Generated::GetDefaultObj()
{
	static class UInventoryBalanceData_Generated* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryBalanceData_Generated*>(UInventoryBalanceData_Generated::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.InventoryBlueprintLibrary
// (None)

class UClass* UInventoryBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryBlueprintLibrary");

	return Clss;
}


// InventoryBlueprintLibrary GbxInventory.Default__InventoryBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryBlueprintLibrary* UInventoryBlueprintLibrary::GetDefaultObj()
{
	static class UInventoryBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryBlueprintLibrary*>(UInventoryBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxInventory.InventoryBlueprintLibrary.GetPossibleGenericParts
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UInventoryBalanceStateComponent*InventoryBalanceState                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       Tags                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bMustHaveAllTags                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bExcludeCurrentlySelectedParts                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UInventoryGenericPartData*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UInventoryGenericPartData*> UInventoryBlueprintLibrary::GetPossibleGenericParts(class UInventoryBalanceStateComponent* InventoryBalanceState, struct FGameplayTagContainer& Tags, bool bMustHaveAllTags, bool bExcludeCurrentlySelectedParts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBlueprintLibrary", "GetPossibleGenericParts");

	Params::UInventoryBlueprintLibrary_GetPossibleGenericParts_Params Parms{};

	Parms.InventoryBalanceState = InventoryBalanceState;
	Parms.Tags = Tags;
	Parms.bMustHaveAllTags = bMustHaveAllTags;
	Parms.bExcludeCurrentlySelectedParts = bExcludeCurrentlySelectedParts;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryBlueprintLibrary.GetInventoryBalanceState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      INVENTORY                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInventoryBalanceStateComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UInventoryBalanceStateComponent* UInventoryBlueprintLibrary::GetInventoryBalanceState(class AActor* INVENTORY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBlueprintLibrary", "GetInventoryBalanceState");

	Params::UInventoryBlueprintLibrary_GetInventoryBalanceState_Params Parms{};

	Parms.INVENTORY = INVENTORY;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryBlueprintLibrary.CreateInventory
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCreatePickup                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SpawnLocation                                                    (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInventoryBalanceStateInitializationDataInitData                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UInventoryBlueprintLibrary::CreateInventory(class UObject* WorldContextObject, bool bCreatePickup, const struct FVector& SpawnLocation, struct FInventoryBalanceStateInitializationData& InitData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBlueprintLibrary", "CreateInventory");

	Params::UInventoryBlueprintLibrary_CreateInventory_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.bCreatePickup = bCreatePickup;
	Parms.SpawnLocation = SpawnLocation;
	Parms.InitData = InitData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryBlueprintLibrary.CloneInventory
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      SourceInventory                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UInventoryBlueprintLibrary::CloneInventory(class AActor* SourceInventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBlueprintLibrary", "CloneInventory");

	Params::UInventoryBlueprintLibrary_CloneInventory_Params Parms{};

	Parms.SourceInventory = SourceInventory;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxInventory.InventoryBlueprintLibrary.BuildInventory
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCreatePickup                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SpawnLocation                                                    (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInventoryBalanceStateInitializationDataInitData                                                         (Parm, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UInventoryBlueprintLibrary::BuildInventory(class UObject* WorldContextObject, bool bCreatePickup, const struct FVector& SpawnLocation, const struct FInventoryBalanceStateInitializationData& InitData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryBlueprintLibrary", "BuildInventory");

	Params::UInventoryBlueprintLibrary_BuildInventory_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.bCreatePickup = bCreatePickup;
	Parms.SpawnLocation = SpawnLocation;
	Parms.InitData = InitData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxInventory.InventoryCategoryData
// (None)

class UClass* UInventoryCategoryData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryCategoryData");

	return Clss;
}


// InventoryCategoryData GbxInventory.Default__InventoryCategoryData
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryCategoryData* UInventoryCategoryData::GetDefaultObj()
{
	static class UInventoryCategoryData* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryCategoryData*>(UInventoryCategoryData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.InventoryConditionalDamageAspectData
// (None)

class UClass* UInventoryConditionalDamageAspectData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryConditionalDamageAspectData");

	return Clss;
}


// InventoryConditionalDamageAspectData GbxInventory.Default__InventoryConditionalDamageAspectData
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryConditionalDamageAspectData* UInventoryConditionalDamageAspectData::GetDefaultObj()
{
	static class UInventoryConditionalDamageAspectData* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryConditionalDamageAspectData*>(UInventoryConditionalDamageAspectData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.InventoryExcludersExpansionData
// (None)

class UClass* UInventoryExcludersExpansionData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryExcludersExpansionData");

	return Clss;
}


// InventoryExcludersExpansionData GbxInventory.Default__InventoryExcludersExpansionData
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryExcludersExpansionData* UInventoryExcludersExpansionData::GetDefaultObj()
{
	static class UInventoryExcludersExpansionData* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryExcludersExpansionData*>(UInventoryExcludersExpansionData::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxInventory.InventoryExcludersExpansionData.EnumeratePossibleExcluders
// (Final, Native, Private, HasOutParams, Const)
// Parameters:
// TArray<class UActorPartData*>      OutPartList                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInventoryExcludersExpansionData::EnumeratePossibleExcluders(TArray<class UActorPartData*>* OutPartList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryExcludersExpansionData", "EnumeratePossibleExcluders");

	Params::UInventoryExcludersExpansionData_EnumeratePossibleExcluders_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPartList != nullptr)
		*OutPartList = std::move(Parms.OutPartList);

}


// Function GbxInventory.InventoryExcludersExpansionData.EnumeratePossibleDependencies
// (Final, Native, Private, HasOutParams, Const)
// Parameters:
// TArray<class UActorPartData*>      OutPartList                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInventoryExcludersExpansionData::EnumeratePossibleDependencies(TArray<class UActorPartData*>* OutPartList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryExcludersExpansionData", "EnumeratePossibleDependencies");

	Params::UInventoryExcludersExpansionData_EnumeratePossibleDependencies_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPartList != nullptr)
		*OutPartList = std::move(Parms.OutPartList);

}


// Class GbxInventory.InventoryGenericPartExpansionData
// (None)

class UClass* UInventoryGenericPartExpansionData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryGenericPartExpansionData");

	return Clss;
}


// InventoryGenericPartExpansionData GbxInventory.Default__InventoryGenericPartExpansionData
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryGenericPartExpansionData* UInventoryGenericPartExpansionData::GetDefaultObj()
{
	static class UInventoryGenericPartExpansionData* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryGenericPartExpansionData*>(UInventoryGenericPartExpansionData::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxInventory.InventoryGenericPartExpansionData.EnumeratePartListForPartType
// (Final, Native, Private, HasOutParams, Const)
// Parameters:
// uint8                              PartType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UActorPartData*>      OutPartList                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInventoryGenericPartExpansionData::EnumeratePartListForPartType(uint8 PartType, TArray<class UActorPartData*>* OutPartList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryGenericPartExpansionData", "EnumeratePartListForPartType");

	Params::UInventoryGenericPartExpansionData_EnumeratePartListForPartType_Params Parms{};

	Parms.PartType = PartType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPartList != nullptr)
		*OutPartList = std::move(Parms.OutPartList);

}


// Class GbxInventory.InventoryMaterialAspectTextureAssetStreamer
// (None)

class UClass* UInventoryMaterialAspectTextureAssetStreamer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryMaterialAspectTextureAssetStreamer");

	return Clss;
}


// InventoryMaterialAspectTextureAssetStreamer GbxInventory.Default__InventoryMaterialAspectTextureAssetStreamer
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryMaterialAspectTextureAssetStreamer* UInventoryMaterialAspectTextureAssetStreamer::GetDefaultObj()
{
	static class UInventoryMaterialAspectTextureAssetStreamer* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryMaterialAspectTextureAssetStreamer*>(UInventoryMaterialAspectTextureAssetStreamer::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.InventoryModuleSettings
// (None)

class UClass* UInventoryModuleSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryModuleSettings");

	return Clss;
}


// InventoryModuleSettings GbxInventory.Default__InventoryModuleSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryModuleSettings* UInventoryModuleSettings::GetDefaultObj()
{
	static class UInventoryModuleSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryModuleSettings*>(UInventoryModuleSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.InventoryNamePartData
// (None)

class UClass* UInventoryNamePartData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryNamePartData");

	return Clss;
}


// InventoryNamePartData GbxInventory.Default__InventoryNamePartData
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryNamePartData* UInventoryNamePartData::GetDefaultObj()
{
	static class UInventoryNamePartData* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryNamePartData*>(UInventoryNamePartData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.InventoryOwnerInterface
// (None)

class UClass* IInventoryOwnerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryOwnerInterface");

	return Clss;
}


// InventoryOwnerInterface GbxInventory.Default__InventoryOwnerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IInventoryOwnerInterface* IInventoryOwnerInterface::GetDefaultObj()
{
	static class IInventoryOwnerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IInventoryOwnerInterface*>(IInventoryOwnerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxInventory.InventoryOwnerInterface.AttachedItemPickedUp
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AInventoryItemPickup*        InventoryItemPickedUp                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      PickedUpBy                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IInventoryOwnerInterface::AttachedItemPickedUp(class AInventoryItemPickup* InventoryItemPickedUp, class AActor* PickedUpBy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryOwnerInterface", "AttachedItemPickedUp");

	Params::IInventoryOwnerInterface_AttachedItemPickedUp_Params Parms{};

	Parms.InventoryItemPickedUp = InventoryItemPickedUp;
	Parms.PickedUpBy = PickedUpBy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxInventory.InventoryParticleAspectData
// (None)

class UClass* UInventoryParticleAspectData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryParticleAspectData");

	return Clss;
}


// InventoryParticleAspectData GbxInventory.Default__InventoryParticleAspectData
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryParticleAspectData* UInventoryParticleAspectData::GetDefaultObj()
{
	static class UInventoryParticleAspectData* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryParticleAspectData*>(UInventoryParticleAspectData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.InventoryPartSetExpansionData
// (None)

class UClass* UInventoryPartSetExpansionData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryPartSetExpansionData");

	return Clss;
}


// InventoryPartSetExpansionData GbxInventory.Default__InventoryPartSetExpansionData
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryPartSetExpansionData* UInventoryPartSetExpansionData::GetDefaultObj()
{
	static class UInventoryPartSetExpansionData* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryPartSetExpansionData*>(UInventoryPartSetExpansionData::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxInventory.InventoryPartSetExpansionData.EnumeratePartListForPartType
// (Final, Native, Private, HasOutParams, Const)
// Parameters:
// uint8                              PartType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UActorPartData*>      OutPartList                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInventoryPartSetExpansionData::EnumeratePartListForPartType(uint8 PartType, TArray<class UActorPartData*>* OutPartList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryPartSetExpansionData", "EnumeratePartListForPartType");

	Params::UInventoryPartSetExpansionData_EnumeratePartListForPartType_Params Parms{};

	Parms.PartType = PartType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPartList != nullptr)
		*OutPartList = std::move(Parms.OutPartList);

}


// Class GbxInventory.InventorySerialNumberAssetInterface
// (None)

class UClass* IInventorySerialNumberAssetInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventorySerialNumberAssetInterface");

	return Clss;
}


// InventorySerialNumberAssetInterface GbxInventory.Default__InventorySerialNumberAssetInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IInventorySerialNumberAssetInterface* IInventorySerialNumberAssetInterface::GetDefaultObj()
{
	static class IInventorySerialNumberAssetInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IInventorySerialNumberAssetInterface*>(IInventorySerialNumberAssetInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.InventorySerialNumberDatabase
// (None)

class UClass* UInventorySerialNumberDatabase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventorySerialNumberDatabase");

	return Clss;
}


// InventorySerialNumberDatabase GbxInventory.Default__InventorySerialNumberDatabase
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventorySerialNumberDatabase* UInventorySerialNumberDatabase::GetDefaultObj()
{
	static class UInventorySerialNumberDatabase* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventorySerialNumberDatabase*>(UInventorySerialNumberDatabase::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.ItemPoolExpansionData
// (None)

class UClass* UItemPoolExpansionData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemPoolExpansionData");

	return Clss;
}


// ItemPoolExpansionData GbxInventory.Default__ItemPoolExpansionData
// (Public, ClassDefaultObject, ArchetypeObject)

class UItemPoolExpansionData* UItemPoolExpansionData::GetDefaultObj()
{
	static class UItemPoolExpansionData* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemPoolExpansionData*>(UItemPoolExpansionData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.ItemPoolListData
// (None)

class UClass* UItemPoolListData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemPoolListData");

	return Clss;
}


// ItemPoolListData GbxInventory.Default__ItemPoolListData
// (Public, ClassDefaultObject, ArchetypeObject)

class UItemPoolListData* UItemPoolListData::GetDefaultObj()
{
	static class UItemPoolListData* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemPoolListData*>(UItemPoolListData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.ItemPoolPartSelectionOverrideData
// (None)

class UClass* UItemPoolPartSelectionOverrideData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemPoolPartSelectionOverrideData");

	return Clss;
}


// ItemPoolPartSelectionOverrideData GbxInventory.Default__ItemPoolPartSelectionOverrideData
// (Public, ClassDefaultObject, ArchetypeObject)

class UItemPoolPartSelectionOverrideData* UItemPoolPartSelectionOverrideData::GetDefaultObj()
{
	static class UItemPoolPartSelectionOverrideData* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemPoolPartSelectionOverrideData*>(UItemPoolPartSelectionOverrideData::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxInventory.ItemPoolPartSelectionOverrideData.EnumerateInventoryParts
// (Final, Native, Private, HasOutParams)
// Parameters:
// uint8                              PartType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UActorPartData*>      OutPartList                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UItemPoolPartSelectionOverrideData::EnumerateInventoryParts(uint8 PartType, TArray<class UActorPartData*>* OutPartList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPoolPartSelectionOverrideData", "EnumerateInventoryParts");

	Params::UItemPoolPartSelectionOverrideData_EnumerateInventoryParts_Params Parms{};

	Parms.PartType = PartType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPartList != nullptr)
		*OutPartList = std::move(Parms.OutPartList);

}


// Class GbxInventory.LootableBalanceData
// (None)

class UClass* ULootableBalanceData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootableBalanceData");

	return Clss;
}


// LootableBalanceData GbxInventory.Default__LootableBalanceData
// (Public, ClassDefaultObject, ArchetypeObject)

class ULootableBalanceData* ULootableBalanceData::GetDefaultObj()
{
	static class ULootableBalanceData* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootableBalanceData*>(ULootableBalanceData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.LootFunctionLibrary
// (None)

class UClass* ULootFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootFunctionLibrary");

	return Clss;
}


// LootFunctionLibrary GbxInventory.Default__LootFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class ULootFunctionLibrary* ULootFunctionLibrary::GetDefaultObj()
{
	static class ULootFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootFunctionLibrary*>(ULootFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxInventory.LootFunctionLibrary.SpawnItemsRaw
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UItemPoolListData*>   ItemPoolLists                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FItemPoolInfo>       ExtraItemPools                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              GameStage                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                              InitialVelocity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULootFunctionLibrary::SpawnItemsRaw(class UObject* WorldContextObject, TArray<class UItemPoolListData*>& ItemPoolLists, TArray<struct FItemPoolInfo>& ExtraItemPools, int32 GameStage, const struct FVector& Location, const struct FRotator& Rotation, float InitialVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootFunctionLibrary", "SpawnItemsRaw");

	Params::ULootFunctionLibrary_SpawnItemsRaw_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ItemPoolLists = ItemPoolLists;
	Parms.ExtraItemPools = ExtraItemPools;
	Parms.GameStage = GameStage;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.InitialVelocity = InitialVelocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxInventory.LootListData
// (None)

class UClass* ULootListData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootListData");

	return Clss;
}


// LootListData GbxInventory.Default__LootListData
// (Public, ClassDefaultObject, ArchetypeObject)

class ULootListData* ULootListData::GetDefaultObj()
{
	static class ULootListData* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootListData*>(ULootListData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.PickupableMeshActor
// (Actor)

class UClass* APickupableMeshActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PickupableMeshActor");

	return Clss;
}


// PickupableMeshActor GbxInventory.Default__PickupableMeshActor
// (Public, ClassDefaultObject, ArchetypeObject)

class APickupableMeshActor* APickupableMeshActor::GetDefaultObj()
{
	static class APickupableMeshActor* Default = nullptr;

	if (!Default)
		Default = static_cast<APickupableMeshActor*>(APickupableMeshActor::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.PickupFlyToAbleInterface
// (None)

class UClass* IPickupFlyToAbleInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PickupFlyToAbleInterface");

	return Clss;
}


// PickupFlyToAbleInterface GbxInventory.Default__PickupFlyToAbleInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IPickupFlyToAbleInterface* IPickupFlyToAbleInterface::GetDefaultObj()
{
	static class IPickupFlyToAbleInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IPickupFlyToAbleInterface*>(IPickupFlyToAbleInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.PickupFlyToData
// (None)

class UClass* UPickupFlyToData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PickupFlyToData");

	return Clss;
}


// PickupFlyToData GbxInventory.Default__PickupFlyToData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPickupFlyToData* UPickupFlyToData::GetDefaultObj()
{
	static class UPickupFlyToData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPickupFlyToData*>(UPickupFlyToData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxInventory.PickupFlyToTargetInterface
// (None)

class UClass* IPickupFlyToTargetInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PickupFlyToTargetInterface");

	return Clss;
}


// PickupFlyToTargetInterface GbxInventory.Default__PickupFlyToTargetInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IPickupFlyToTargetInterface* IPickupFlyToTargetInterface::GetDefaultObj()
{
	static class IPickupFlyToTargetInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IPickupFlyToTargetInterface*>(IPickupFlyToTargetInterface::StaticClass()->DefaultObject);

	return Default;
}

}


