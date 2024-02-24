#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x3E8 - 0x328)
// BlueprintGeneratedClass BP_CharacterCreation_ProxyChar_Base.BP_CharacterCreation_ProxyChar_Base_C
class ABP_CharacterCreation_ProxyChar_Base_C : public APawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  GPR_HUM_Crane03;                                   // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  FootStool;                                         // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Clothes__Back_;                                    // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AsyncAssetLoader_C*                BP_AsyncAssetLoader;                               // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_CharacterCustomization_Component_C* BP_CharacterCustomization_Component;               // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Clothes__Boots_;                                   // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Clothes__Torso_;                                   // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Clothes__Head_;                                    // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Head__Hair_;                                       // 0x370(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Clothes__Gear_;                                    // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Clothes__Gloves_;                                  // 0x380(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Clothes__Bottom_;                                  // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Clothes__Glasses_;                                 // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Clothes__Jewelry_;                                 // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Head__Teeth_;                                      // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Head__Eyebrows_;                                   // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Head__Facial_Hair_;                                // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Head__eyes_;                                       // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_UI_CameraRig_Character_C*          CameraRig;                                         // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         HasInitalized;                                     // 0x3D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E95[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CameraArmLength;                                   // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CharacterCreation_ProxyChar_Base_C* GetDefaultObj();

	void GetClothes_Back(class USkeletalMeshComponent** BackComponent);
	void GetClothes_Torso(class USkeletalMeshComponent** TorsoComponent);
	void GetClothes_Bottom(class USkeletalMeshComponent** PantsComponent);
	void GetClothes_Boots(class USkeletalMeshComponent** ShoesComponent);
	void GetBodyPart_Hair(class USkeletalMeshComponent** HairComponent);
	void GetClothes_Head(class USkeletalMeshComponent** HatComponent);
	void GetClothes_Gloves(class USkeletalMeshComponent** GlovesComponent);
	void GetBodyPart_Eyes(class USkeletalMeshComponent** EyeComponent);
	void GetBody(class USkeletalMeshComponent** BodyComponent);
	void GetCLothes_Gear(class USkeletalMeshComponent** Gear);
	void GetBodyPart_FacialHair(class USkeletalMeshComponent** FacialHairComponent);
	void GetBodyPart_Eyebrows(class USkeletalMeshComponent** EyebrowsComponent);
	void GetBodyPart_Teeth(class USkeletalMeshComponent** TeethComponent);
	void GetClothes_Glasses(class USkeletalMeshComponent** GlassesComponent);
	void GetClothes_Jewelry(class USkeletalMeshComponent** JewelryComponent);
	void BP_CharacterCreation_ProxyChar_Base_AutoGenFunc(double ArmLength);
	void UpdateLoadingState(enum class E_LoadingState LoadingState);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_CharacterCreation_ProxyChar_Base(int32 EntryPoint, float K2Node_Event_DeltaSeconds, enum class E_LoadingState Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_K2_AttachToActor_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, double CallFunc_GetNormalizedCameraZoom_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_UI_CameraRig_Character_C* CallFunc_FinishSpawningActor_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class E_LoadingState K2Node_Event_LoadingState, bool K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue);
};

}


