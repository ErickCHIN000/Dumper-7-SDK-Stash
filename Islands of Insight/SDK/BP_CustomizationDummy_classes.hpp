#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x169 (0x389 - 0x220)
// BlueprintGeneratedClass BP_CustomizationDummy.BP_CustomizationDummy_C
class ABP_CustomizationDummy_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Scalp;                                             // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Head;                                              // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                      LostSpiritMovementSpline;                          // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Wings;                                             // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Hair;                                              // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh3;                                     // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh2;                                     // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh1;                                     // 0x270(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        CharacterRevealTimeline_Character_Visibility_4A291BBB450625FB9BAECEA618B3D15D; // 0x280(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                CharacterRevealTimeline__Direction_4A291BBB450625FB9BAECEA618B3D15D; // 0x284(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1912[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    CharacterRevealTimeline;                           // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MoveLostSpiritTimeline_DistanceAlongSlpine_8C2A9A904D2CD025032FC8A118B8FE1C; // 0x290(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                MoveLostSpiritTimeline__Direction_8C2A9A904D2CD025032FC8A118B8FE1C; // 0x294(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1913[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    MoveLostSpiritTimeline;                            // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CharacterRotLerp_NewTrack_0_BB7DFE9744B80C80359D7081435C683B; // 0x2A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                CharacterRotLerp__Direction_BB7DFE9744B80C80359D7081435C683B; // 0x2A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1915[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    CharacterRotLerp;                                  // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFirstPersonCharacter_C*               PlayerRef;                                         // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USophiaGameInstance*                   GI;                                                // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ClothesMat;                                        // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              GlovesMat;                                         // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              HeadPieceMat;                                      // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              SkinMat;                                           // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              SkinMatUnderwear;                                  // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              HeadMat;                                           // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              EyeMat;                                            // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              EyebrowMat;                                        // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              HairMat;                                           // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ScalpMat;                                          // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UABP_SophiaBasic_C*                    AnimInstance;                                      // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UNiagaraComponent*>             Streamers;                                         // 0x318(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                        ClothesIndex;                                      // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GlovesIndex;                                       // 0x32C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HeadPieceIndex;                                    // 0x330(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        EquippedWings;                                     // 0x334(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentRot;                                        // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TargetRot;                                         // 0x33C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_LostSpirit_C*                      LostSpirit;                                        // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UNiagaraComponent*>             CharacterRevealNiagaraSystems;                     // 0x348(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class USkeletalMeshComponent*>        SkeletalMeshesList;                                // 0x358(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         DelayCharacterReveal;                              // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_191F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UNiagaraComponent*>             TempStreamers;                                     // 0x370(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UFMODEvent*                            CharacterRevealEvent;                              // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsMale;                                           // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_CustomizationDummy_C* GetDefaultObj();

	void GetCustomizationData(struct FCustomizationData* Info);
	void GetCustomizationWidget(class UWBP_CharacterCreation2_C** Return);
	void HandleHeadMaterial(class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue, const struct FCustomizationMaterialInfo& CallFunc_Array_Get_Item, class UMaterialInstance* CallFunc_Array_Get_Item_1, class UMaterialInstance* CallFunc_Array_Get_Item_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UMaterialInstance* CallFunc_Array_Get_Item_3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2);
	bool IsEthricHair(const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut, int32 CallFunc_GetEthricIndex_Array_Index, uint8 CallFunc_Conv_IntToByte_ReturnValue, bool CallFunc_GreaterEqual_ByteByte_ReturnValue);
	void Handle_Hair_And_Scalp(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, class UStaticMesh* Temp_object_Variable, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_2, bool CallFunc_IsEthricHair_ReturnValue, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue, bool CallFunc_IsEthricHair_ReturnValue_1, uint8 K2Node_Select_Default, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_SelectFloat_ReturnValue, uint8 K2Node_Select_Default_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_1, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_2, TArray<struct FLinearColor>& K2Node_Select_Default_2, TArray<struct FLinearColor>& K2Node_Select_Default_3, int32 Temp_int_Variable, bool Temp_bool_Variable_5, int32 K2Node_Select_Default_4, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FCustomizationMaterialInfo& CallFunc_Array_Get_Item, class UStaticMesh* CallFunc_Array_Get_Item_1, class UMaterialInstance* CallFunc_Array_Get_Item_2, class UStaticMesh* K2Node_Select_Default_5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, class UMaterialInstance* CallFunc_Array_Get_Item_3, class UStaticMesh* CallFunc_Array_Get_Item_4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_1);
	void HandleFaceTattoo(uint8 InByte, bool CallFunc_Greater_ByteByte_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationDataAssetByIndex_ReturnValue, const struct FCustomizationSingle& CallFunc_GetCustomizationDataByIndex_ReturnValue, const struct FCustomizationSingle& CallFunc_GetCustomizationDataByIndex_ReturnValue_1, class UTexture2D* CallFunc_Array_Get_Item, class UTexture2D* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue);
	void HandleBodyTattoo(uint8 A, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_Greater_ByteByte_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue);
	void TEMP_SetMeshvisibleInsteadOfFade(bool bNewVisibility, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateSex(int32 Temp_int_Array_Index_Variable, bool CallFunc_Greater_IntInt_ReturnValue, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut, bool CallFunc_IsValid_ReturnValue, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_1, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_2, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_4, const struct FCustomizationMaterialInfo& CallFunc_Array_Get_Item, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_5, class UMaterialInstance* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UMaterialInstance* CallFunc_Array_Get_Item_2, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_6, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class USkeletalMesh* CallFunc_Array_Get_Item_3, class USkeletalMesh* CallFunc_Array_Get_Item_4);
	void HandleCustomizationUpdate(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut, int32 CallFunc_Conv_ByteToInt_ReturnValue, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_3, int32 CallFunc_Conv_ByteToInt_ReturnValue_3, int32 CallFunc_Conv_ByteToInt_ReturnValue_4, int32 CallFunc_Conv_ByteToInt_ReturnValue_5, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_1, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_3, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_4, const struct FCustomizationMaterialInfo& CallFunc_Array_Get_Item, class UMaterialInstance* CallFunc_Array_Get_Item_1, class USkeletalMesh* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_5, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, class USkeletalMesh* CallFunc_Array_Get_Item_3, int32 CallFunc_Add_IntInt_ReturnValue_2, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, class UNiagaraComponent* CallFunc_Array_Get_Item_4, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_7, const struct FCustomizationMaterialInfo& CallFunc_Array_Get_Item_5, class UMaterialInstance* CallFunc_Array_Get_Item_6, class UMaterialInstance* CallFunc_Array_Get_Item_7, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1);
	void SetMaterialsForCharacterRevealEffect(float Character_Visibility, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void ActivateCharacterRevealEffect(float LifeTime, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class USkeletalMeshComponent* CallFunc_Array_Get_Item, class UNiagaraComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SpawnLostSpiritAndCharacterRevealEffect(int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_LostSpirit_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void AddSkeletalMeshesToArray(int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4);
	void UpdateSkinMaterial(const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_3, int32 CallFunc_Conv_ByteToInt_ReturnValue_4, bool CallFunc_Conv_IntToBool_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_5, bool CallFunc_Conv_IntToBool_ReturnValue_2);
	void GetOutfitMaterial(TArray<struct FCostume>& Array, class UMaterialInstance** Output, const struct FCostume& CallFunc_Array_Get_Item, class UMaterialInstance* CallFunc_Array_Get_Item_1);
	void GetLocalClothes(int32* ClothesVal, int32* HeadPieceVal, int32* GlovesVal);
	void GetMesh(class UStaticMeshComponent** StaticMesh);
	class UCharacterCustomizationDataAsset* GetCostumeDataAsset(bool CallFunc_IsValid_ReturnValue, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationDataAssetByIndex_ReturnValue);
	void HandleMeshDynamicMaterial(class UPrimitiveComponent* Mesh, class UMaterialInterface* Mat, class UMaterialInstanceDynamic*& Instance, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void SetWingsMaterial(int32 Selection, int32 MeshIndex, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue, const struct FCustomizationSingle& CallFunc_GetCustomizationDataByIndex_ReturnValue, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UMaterialInstance* CallFunc_Array_Get_Item);
	void SetWingsMesh(int32 InVal, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FCustomizationSingle& CallFunc_GetCustomizationDataByIndex_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, class UMaterialInstance* CallFunc_Array_Get_Item);
	void UserConstructionScript(bool CallFunc_K2_AttachToComponent_ReturnValue);
	void CharacterRotLerp__FinishedFunc();
	void CharacterRotLerp__UpdateFunc();
	void MoveLostSpiritTimeline__FinishedFunc();
	void MoveLostSpiritTimeline__UpdateFunc();
	void CharacterRevealTimeline__FinishedFunc();
	void CharacterRevealTimeline__UpdateFunc();
	void OnChangeGlideTrailColor(int32 Val);
	void OnHairChanged(int32 Val);
	void OnClothesColorChanged(int32 Val);
	void OnGlovesColorChanged(int32 Val);
	void OnHeadPieceColorChanged(int32 Val);
	void OnSkinColorChanged(int32 Val);
	void OnHairColorChanged(int32 Val);
	void OnTrailColorChanged(int32 Index);
	void ReceiveBeginPlay();
	void OnEnterExitWingsMenu(bool Val);
	void OnChangedWingsMesh(int32 Val);
	void OnChangedWingsColor(int32 Val);
	void OnSexChanged();
	void OnCancel();
	void OnConfirm();
	void UpdateToMatchLocalCustomization();
	void FromTrails(bool Value);
	void StartRotLerp();
	void EndRotLerp();
	void ReceiveTick(float DeltaSeconds);
	void OnSkinEffectsChanged(bool Sheen, bool Emissive, bool Edge);
	void OnMaterialScalarValueChanged(int32 Wetness, class FName Name, float Divisor);
	void MoveLostSpirit();
	void RevealCharacter(float LifeTime);
	void OnClothesChanged(int32 Val);
	void OnHeadPieceChanged(int32 Val);
	void OnGlovesChanged(int32 Val);
	void DeactivateLostSpirit();
	void OnTrailSystemChange(int32 Index);
	void HandleRunning();
	void HandleWings();
	void ExecuteUbergraph_BP_CustomizationDummy(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, class FName Temp_name_Variable, class FName Temp_name_Variable_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, class UNiagaraComponent* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable_3, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_5, class FName K2Node_Select_Default, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Array_Index_Variable_5, int32 K2Node_Event_Val_12, int32 K2Node_Event_Val_11, int32 K2Node_Event_Val_10, int32 K2Node_Event_Val_9, int32 K2Node_Event_Val_8, int32 K2Node_Event_Val_7, int32 K2Node_Event_Val_6, int32 K2Node_Event_Index, bool K2Node_Event_Val_5, int32 K2Node_Event_Val_4, int32 K2Node_Event_Val_3, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_CustomEvent_Value, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, float K2Node_Event_DeltaSeconds, class UNiagaraComponent* CallFunc_Array_Get_Item_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, bool K2Node_Event_Sheen, bool K2Node_Event_Emissive, bool K2Node_Event_Edge, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, float CallFunc_Conv_BoolToFloat_ReturnValue_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_2, int32 K2Node_Event_Wetness, class FName K2Node_Event_Name, float K2Node_Event_Divisor, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetSplineLength_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, float K2Node_CustomEvent_Lifetime, float CallFunc_Divide_FloatFloat_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, int32 K2Node_Event_Val_2, class UABP_SophiaBasic_C* K2Node_DynamicCast_AsABP_Sophia_Basic, bool K2Node_DynamicCast_bSuccess, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationDataAssetByIndex_ReturnValue, const struct FCustomizationSingle& CallFunc_GetCustomizationDataByIndex_ReturnValue, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1, class UTexture2D* CallFunc_Array_Get_Item_2, class UMaterialInstance* CallFunc_Array_Get_Item_3, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationDataAssetByIndex_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_6, int32 Temp_int_Array_Index_Variable_6, class UNiagaraComponent* CallFunc_Array_Get_Item_4, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 K2Node_Event_Val_1, int32 K2Node_Event_Val, const struct FCustomizationSingle& CallFunc_GetCustomizationDataByIndex_ReturnValue_1, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_4, class UTexture2D* CallFunc_Array_Get_Item_5, bool CallFunc_Less_IntInt_ReturnValue_3, class UMaterialInstance* CallFunc_Array_Get_Item_6, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_4, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_5, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess_1, int32 K2Node_CustomEvent_Index, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue, int32 Temp_int_Loop_Counter_Variable_7, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_7, const struct FCustomizationSingle& CallFunc_GetCustomizationDataByIndex_ReturnValue_2, bool CallFunc_WasRecentlyRendered_ReturnValue, bool CallFunc_IsMapMenuVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_1, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_2, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_3, bool CallFunc_BPI_IsFTUE_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_2, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_2, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationDataAssetByIndex_ReturnValue_2, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_3, const struct FCustomizationSingle& CallFunc_GetCustomizationDataByIndex_ReturnValue_3, int32 CallFunc_Conv_ByteToInt_ReturnValue_3, class UTexture2D* CallFunc_Array_Get_Item_7, class UMaterialInstance* CallFunc_Array_Get_Item_8, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_4, int32 CallFunc_Conv_ByteToInt_ReturnValue_5, bool CallFunc_BPI_IsFTUE_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, class UNiagaraComponent* CallFunc_Array_Get_Item_9, int32 CallFunc_Array_Length_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_7, bool CallFunc_BooleanAND_ReturnValue_3, class UNiagaraComponent* CallFunc_Array_Get_Item_10, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_4, const struct FRotator& CallFunc_RLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AFirstPersonCharacter_C* K2Node_DynamicCast_AsFirst_Person_Character, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, uint8 CallFunc_Conv_BoolToByte_ReturnValue, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}

