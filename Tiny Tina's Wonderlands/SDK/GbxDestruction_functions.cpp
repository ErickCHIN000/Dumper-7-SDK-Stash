#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxDestruction.ClothActor
// (Actor)

class UClass* AClothActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothActor");

	return Clss;
}


// ClothActor GbxDestruction.Default__ClothActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AClothActor* AClothActor::GetDefaultObj()
{
	static class AClothActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AClothActor*>(AClothActor::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDestruction.ClothSkeletalMeshActor
// (Actor)

class UClass* AClothSkeletalMeshActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothSkeletalMeshActor");

	return Clss;
}


// ClothSkeletalMeshActor GbxDestruction.Default__ClothSkeletalMeshActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AClothSkeletalMeshActor* AClothSkeletalMeshActor::GetDefaultObj()
{
	static class AClothSkeletalMeshActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AClothSkeletalMeshActor*>(AClothSkeletalMeshActor::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDestruction.ClothStaticMeshActor
// (Actor)

class UClass* AClothStaticMeshActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothStaticMeshActor");

	return Clss;
}


// ClothStaticMeshActor GbxDestruction.Default__ClothStaticMeshActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AClothStaticMeshActor* AClothStaticMeshActor::GetDefaultObj()
{
	static class AClothStaticMeshActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AClothStaticMeshActor*>(AClothStaticMeshActor::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDestruction.ClothManager
// (Actor)

class UClass* AClothManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothManager");

	return Clss;
}


// ClothManager GbxDestruction.Default__ClothManager
// (Public, ClassDefaultObject, ArchetypeObject)

class AClothManager* AClothManager::GetDefaultObj()
{
	static class AClothManager* Default = nullptr;

	if (!Default)
		Default = static_cast<AClothManager*>(AClothManager::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDestruction.GbxDestructibleActor
// (Actor)

class UClass* AGbxDestructibleActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxDestructibleActor");

	return Clss;
}


// GbxDestructibleActor GbxDestruction.Default__GbxDestructibleActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AGbxDestructibleActor* AGbxDestructibleActor::GetDefaultObj()
{
	static class AGbxDestructibleActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AGbxDestructibleActor*>(AGbxDestructibleActor::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxDestruction.GbxDestructibleActor.SetMissionCritical
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bCritical                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGbxDestructibleActor::SetMissionCritical(bool bCritical)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDestructibleActor", "SetMissionCritical");

	Params::AGbxDestructibleActor_SetMissionCritical_Params Parms{};

	Parms.bCritical = bCritical;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxDestruction.GbxDestructibleActor.SetFracturable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bFracturable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGbxDestructibleActor::SetFracturable(bool bFracturable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDestructibleActor", "SetFracturable");

	Params::AGbxDestructibleActor_SetFracturable_Params Parms{};

	Parms.bFracturable = bFracturable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxDestruction.GbxDestructibleActor.OnRep_TransformBuffer
// (Final, Native, Public)
// Parameters:

void AGbxDestructibleActor::OnRep_TransformBuffer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDestructibleActor", "OnRep_TransformBuffer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxDestruction.GbxDestructibleActor.OnRep_SyncID
// (Final, Native, Public)
// Parameters:

void AGbxDestructibleActor::OnRep_SyncID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDestructibleActor", "OnRep_SyncID");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxDestruction.GbxDestructibleActor.OnRep_FractureBuffer
// (Final, Native, Public)
// Parameters:

void AGbxDestructibleActor::OnRep_FractureBuffer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDestructibleActor", "OnRep_FractureBuffer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxDestruction.GbxDestructibleActor.IsFracturable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AGbxDestructibleActor::IsFracturable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDestructibleActor", "IsFracturable");

	Params::AGbxDestructibleActor_IsFracturable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxDestruction.GbxDestructibleComponent
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent)

class UClass* UGbxDestructibleComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxDestructibleComponent");

	return Clss;
}


// GbxDestructibleComponent GbxDestruction.Default__GbxDestructibleComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxDestructibleComponent* UGbxDestructibleComponent::GetDefaultObj()
{
	static class UGbxDestructibleComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxDestructibleComponent*>(UGbxDestructibleComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxDestruction.GbxDestructibleComponent.SetFracturable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bFracturable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxDestructibleComponent::SetFracturable(bool bFracturable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDestructibleComponent", "SetFracturable");

	Params::UGbxDestructibleComponent_SetFracturable_Params Parms{};

	Parms.bFracturable = bFracturable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxDestruction.GbxDestructibleComponent.IsFracturable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxDestructibleComponent::IsFracturable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDestructibleComponent", "IsFracturable");

	Params::UGbxDestructibleComponent_IsFracturable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxDestruction.GbxDestructibleComponent.GetTotalPercentFractured
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGbxDestructibleComponent::GetTotalPercentFractured()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDestructibleComponent", "GetTotalPercentFractured");

	Params::UGbxDestructibleComponent_GetTotalPercentFractured_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxDestruction.GbxDestructibleComponent.GetDamageRequiredToFracture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Depth                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGbxDestructibleComponent::GetDamageRequiredToFracture(int32 Depth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDestructibleComponent", "GetDamageRequiredToFracture");

	Params::UGbxDestructibleComponent_GetDamageRequiredToFracture_Params Parms{};

	Parms.Depth = Depth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxDestruction.GbxDestructibleComponent.FractureRandomChunk
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGbxDestructibleComponent::FractureRandomChunk()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDestructibleComponent", "FractureRandomChunk");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxDestruction.GbxUserDestructibleSyncManager
// (Actor)

class UClass* AGbxUserDestructibleSyncManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxUserDestructibleSyncManager");

	return Clss;
}


// GbxUserDestructibleSyncManager GbxDestruction.Default__GbxUserDestructibleSyncManager
// (Public, ClassDefaultObject, ArchetypeObject, Transient, DuplicateTransient)

class AGbxUserDestructibleSyncManager* AGbxUserDestructibleSyncManager::GetDefaultObj()
{
	static class AGbxUserDestructibleSyncManager* Default = nullptr;

	if (!Default)
		Default = static_cast<AGbxUserDestructibleSyncManager*>(AGbxUserDestructibleSyncManager::StaticClass()->DefaultObject);

	return Default;
}

}


