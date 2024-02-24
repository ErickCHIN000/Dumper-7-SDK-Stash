#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CharacterCreation_ProxyChar_Base.BP_CharacterCreation_ProxyChar_Base_C
// (Actor, Pawn)

class UClass* ABP_CharacterCreation_ProxyChar_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CharacterCreation_ProxyChar_Base_C");

	return Clss;
}


// BP_CharacterCreation_ProxyChar_Base_C BP_CharacterCreation_ProxyChar_Base.Default__BP_CharacterCreation_ProxyChar_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CharacterCreation_ProxyChar_Base_C* ABP_CharacterCreation_ProxyChar_Base_C::GetDefaultObj()
{
	static class ABP_CharacterCreation_ProxyChar_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CharacterCreation_ProxyChar_Base_C*>(ABP_CharacterCreation_ProxyChar_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CharacterCreation_ProxyChar_Base.BP_CharacterCreation_ProxyChar_Base_C.GetClothes_Back
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      BackComponent                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterCreation_ProxyChar_Base_C::GetClothes_Back(class USkeletalMeshComponent** BackComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterCreation_ProxyChar_Base_C", "GetClothes_Back");

	Params::ABP_CharacterCreation_ProxyChar_Base_C_GetClothes_Back_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BackComponent != nullptr)
		*BackComponent = Parms.BackComponent;

}


// Function BP_CharacterCreation_ProxyChar_Base.BP_CharacterCreation_ProxyChar_Base_C.GetClothes_Torso
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      TorsoComponent                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterCreation_ProxyChar_Base_C::GetClothes_Torso(class USkeletalMeshComponent** TorsoComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterCreation_ProxyChar_Base_C", "GetClothes_Torso");

	Params::ABP_CharacterCreation_ProxyChar_Base_C_GetClothes_Torso_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TorsoComponent != nullptr)
		*TorsoComponent = Parms.TorsoComponent;

}


// Function BP_CharacterCreation_ProxyChar_Base.BP_CharacterCreation_ProxyChar_Base_C.GetClothes_Bottom
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      PantsComponent                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterCreation_ProxyChar_Base_C::GetClothes_Bottom(class USkeletalMeshComponent** PantsComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterCreation_ProxyChar_Base_C", "GetClothes_Bottom");

	Params::ABP_CharacterCreation_ProxyChar_Base_C_GetClothes_Bottom_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PantsComponent != nullptr)
		*PantsComponent = Parms.PantsComponent;

}


// Function BP_CharacterCreation_ProxyChar_Base.BP_CharacterCreation_ProxyChar_Base_C.GetClothes_Boots
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      ShoesComponent                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterCreation_ProxyChar_Base_C::GetClothes_Boots(class USkeletalMeshComponent** ShoesComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterCreation_ProxyChar_Base_C", "GetClothes_Boots");

	Params::ABP_CharacterCreation_ProxyChar_Base_C_GetClothes_Boots_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShoesComponent != nullptr)
		*ShoesComponent = Parms.ShoesComponent;

}


// Function BP_CharacterCreation_ProxyChar_Base.BP_CharacterCreation_ProxyChar_Base_C.GetBodyPart_Hair
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      HairComponent                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterCreation_ProxyChar_Base_C::GetBodyPart_Hair(class USkeletalMeshComponent** HairComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterCreation_ProxyChar_Base_C", "GetBodyPart_Hair");

	Params::ABP_CharacterCreation_ProxyChar_Base_C_GetBodyPart_Hair_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HairComponent != nullptr)
		*HairComponent = Parms.HairComponent;

}


// Function BP_CharacterCreation_ProxyChar_Base.BP_CharacterCreation_ProxyChar_Base_C.GetClothes_Head
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      HatComponent                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterCreation_ProxyChar_Base_C::GetClothes_Head(class USkeletalMeshComponent** HatComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterCreation_ProxyChar_Base_C", "GetClothes_Head");

	Params::ABP_CharacterCreation_ProxyChar_Base_C_GetClothes_Head_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HatComponent != nullptr)
		*HatComponent = Parms.HatComponent;

}


// Function BP_CharacterCreation_ProxyChar_Base.BP_CharacterCreation_ProxyChar_Base_C.GetClothes_Gloves
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      GlovesComponent                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterCreation_ProxyChar_Base_C::GetClothes_Gloves(class USkeletalMeshComponent** GlovesComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterCreation_ProxyChar_Base_C", "GetClothes_Gloves");

	Params::ABP_CharacterCreation_ProxyChar_Base_C_GetClothes_Gloves_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (GlovesComponent != nullptr)
		*GlovesComponent = Parms.GlovesComponent;

}


// Function BP_CharacterCreation_ProxyChar_Base.BP_CharacterCreation_ProxyChar_Base_C.GetBodyPart_Eyes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      EyeComponent                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterCreation_ProxyChar_Base_C::GetBodyPart_Eyes(class USkeletalMeshComponent** EyeComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterCreation_ProxyChar_Base_C", "GetBodyPart_Eyes");

	Params::ABP_CharacterCreation_ProxyChar_Base_C_GetBodyPart_Eyes_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EyeComponent != nullptr)
		*EyeComponent = Parms.EyeComponent;

}


// Function BP_CharacterCreation_ProxyChar_Base.BP_CharacterCreation_ProxyChar_Base_C.GetBody
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      BodyComponent                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterCreation_ProxyChar_Base_C::GetBody(class USkeletalMeshComponent** BodyComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterCreation_ProxyChar_Base_C", "GetBody");

	Params::ABP_CharacterCreation_ProxyChar_Base_C_GetBody_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BodyComponent != nullptr)
		*BodyComponent = Parms.BodyComponent;

}


// Function BP_CharacterCreation_ProxyChar_Base.BP_CharacterCreation_ProxyChar_Base_C.GetCLothes_Gear
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      Gear                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterCreation_ProxyChar_Base_C::GetCLothes_Gear(class USkeletalMeshComponent** Gear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterCreation_ProxyChar_Base_C", "GetCLothes_Gear");

	Params::ABP_CharacterCreation_ProxyChar_Base_C_GetCLothes_Gear_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Gear != nullptr)
		*Gear = Parms.Gear;

}


// Function BP_CharacterCreation_ProxyChar_Base.BP_CharacterCreation_ProxyChar_Base_C.GetBodyPart_FacialHair
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      FacialHairComponent                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterCreation_ProxyChar_Base_C::GetBodyPart_FacialHair(class USkeletalMeshComponent** FacialHairComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterCreation_ProxyChar_Base_C", "GetBodyPart_FacialHair");

	Params::ABP_CharacterCreation_ProxyChar_Base_C_GetBodyPart_FacialHair_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FacialHairComponent != nullptr)
		*FacialHairComponent = Parms.FacialHairComponent;

}


// Function BP_CharacterCreation_ProxyChar_Base.BP_CharacterCreation_ProxyChar_Base_C.GetBodyPart_Eyebrows
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      EyebrowsComponent                                                (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterCreation_ProxyChar_Base_C::GetBodyPart_Eyebrows(class USkeletalMeshComponent** EyebrowsComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterCreation_ProxyChar_Base_C", "GetBodyPart_Eyebrows");

	Params::ABP_CharacterCreation_ProxyChar_Base_C_GetBodyPart_Eyebrows_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EyebrowsComponent != nullptr)
		*EyebrowsComponent = Parms.EyebrowsComponent;

}


// Function BP_CharacterCreation_ProxyChar_Base.BP_CharacterCreation_ProxyChar_Base_C.GetBodyPart_Teeth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      TeethComponent                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterCreation_ProxyChar_Base_C::GetBodyPart_Teeth(class USkeletalMeshComponent** TeethComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterCreation_ProxyChar_Base_C", "GetBodyPart_Teeth");

	Params::ABP_CharacterCreation_ProxyChar_Base_C_GetBodyPart_Teeth_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TeethComponent != nullptr)
		*TeethComponent = Parms.TeethComponent;

}


// Function BP_CharacterCreation_ProxyChar_Base.BP_CharacterCreation_ProxyChar_Base_C.GetClothes_Glasses
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      GlassesComponent                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterCreation_ProxyChar_Base_C::GetClothes_Glasses(class USkeletalMeshComponent** GlassesComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterCreation_ProxyChar_Base_C", "GetClothes_Glasses");

	Params::ABP_CharacterCreation_ProxyChar_Base_C_GetClothes_Glasses_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (GlassesComponent != nullptr)
		*GlassesComponent = Parms.GlassesComponent;

}


// Function BP_CharacterCreation_ProxyChar_Base.BP_CharacterCreation_ProxyChar_Base_C.GetClothes_Jewelry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      JewelryComponent                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterCreation_ProxyChar_Base_C::GetClothes_Jewelry(class USkeletalMeshComponent** JewelryComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterCreation_ProxyChar_Base_C", "GetClothes_Jewelry");

	Params::ABP_CharacterCreation_ProxyChar_Base_C_GetClothes_Jewelry_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (JewelryComponent != nullptr)
		*JewelryComponent = Parms.JewelryComponent;

}


// Function BP_CharacterCreation_ProxyChar_Base.BP_CharacterCreation_ProxyChar_Base_C.BP_CharacterCreation_ProxyChar_Base_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             ArmLength                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterCreation_ProxyChar_Base_C::BP_CharacterCreation_ProxyChar_Base_AutoGenFunc(double ArmLength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterCreation_ProxyChar_Base_C", "BP_CharacterCreation_ProxyChar_Base_AutoGenFunc");

	Params::ABP_CharacterCreation_ProxyChar_Base_C_BP_CharacterCreation_ProxyChar_Base_AutoGenFunc_Params Parms{};

	Parms.ArmLength = ArmLength;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterCreation_ProxyChar_Base.BP_CharacterCreation_ProxyChar_Base_C.UpdateLoadingState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_LoadingState          LoadingState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterCreation_ProxyChar_Base_C::UpdateLoadingState(enum class E_LoadingState LoadingState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterCreation_ProxyChar_Base_C", "UpdateLoadingState");

	Params::ABP_CharacterCreation_ProxyChar_Base_C_UpdateLoadingState_Params Parms{};

	Parms.LoadingState = LoadingState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterCreation_ProxyChar_Base.BP_CharacterCreation_ProxyChar_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CharacterCreation_ProxyChar_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterCreation_ProxyChar_Base_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterCreation_ProxyChar_Base.BP_CharacterCreation_ProxyChar_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterCreation_ProxyChar_Base_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterCreation_ProxyChar_Base_C", "ReceiveTick");

	Params::ABP_CharacterCreation_ProxyChar_Base_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterCreation_ProxyChar_Base.BP_CharacterCreation_ProxyChar_Base_C.ExecuteUbergraph_BP_CharacterCreation_ProxyChar_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_LoadingState          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToActor_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetNormalizedCameraZoom_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_UI_CameraRig_Character_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_LoadingState          K2Node_Event_LoadingState                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterCreation_ProxyChar_Base_C::ExecuteUbergraph_BP_CharacterCreation_ProxyChar_Base(int32 EntryPoint, float K2Node_Event_DeltaSeconds, enum class E_LoadingState Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_K2_AttachToActor_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, double CallFunc_GetNormalizedCameraZoom_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_UI_CameraRig_Character_C* CallFunc_FinishSpawningActor_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class E_LoadingState K2Node_Event_LoadingState, bool K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterCreation_ProxyChar_Base_C", "ExecuteUbergraph_BP_CharacterCreation_ProxyChar_Base");

	Params::ABP_CharacterCreation_ProxyChar_Base_C_ExecuteUbergraph_BP_CharacterCreation_ProxyChar_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_AttachToActor_ReturnValue = CallFunc_K2_AttachToActor_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetNormalizedCameraZoom_ReturnValue = CallFunc_GetNormalizedCameraZoom_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_LoadingState = K2Node_Event_LoadingState;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


