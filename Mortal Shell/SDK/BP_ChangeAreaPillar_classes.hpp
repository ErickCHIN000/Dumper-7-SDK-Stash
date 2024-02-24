#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x179 (0x51A - 0x3A1)
// BlueprintGeneratedClass BP_ChangeAreaPillar.BP_ChangeAreaPillar_C
class ABP_ChangeAreaPillar_C : public AUsable_Branching_NPC_C
{
public:
	uint8                                        Pad_3256[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Audio_Fire;                                        // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URuneRandomizerComponent_C*            RuneRandomizerComponent;                           // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Capsule;                                           // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Godray;                                         // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Fire;                                            // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Cube_3;                                         // 0x3D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Cube_2;                                         // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Cube_1;                                         // 0x3E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Stand;                                          // 0x3F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   SpotLight_Fire;                                    // 0x3F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Cubes_Movement_3_Alpha_7F32BFB9406E25CC0EB98D92BD2C70A7; // 0x400(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_Cubes_Movement_3__Direction_7F32BFB9406E25CC0EB98D92BD2C70A7; // 0x404(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3273[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_Cubes_Movement_3;                         // 0x408(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Cubes_Movement_2_Alpha_5E492B364F1385F3D6A12DA9766CB3E6; // 0x410(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_Cubes_Movement_2__Direction_5E492B364F1385F3D6A12DA9766CB3E6; // 0x414(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_327A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_Cubes_Movement_2;                         // 0x418(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Cubes_Movement_1_Alpha_B1B7F6E949F945E5240EBCA253353F0C; // 0x420(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_Cubes_Movement_1__Direction_B1B7F6E949F945E5240EBCA253353F0C; // 0x424(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3283[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_Cubes_Movement_1;                         // 0x428(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_3_Alpha_D77594E6486FAB650A290483621D43ED; // 0x430(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_3__Direction_D77594E6486FAB650A290483621D43ED; // 0x434(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3289[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_3;                                        // 0x438(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_StormModeArea                Area;                                              // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_StormModeProgress            StormModeProgress;                                 // 0x441(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3290[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  BranchText;                                        // 0x448(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  GlandGiveID;                                       // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  OpenAreaID;                                        // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  GlandReturnedID;                                   // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NotifyAtSequenceEnd;                               // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SeedManager_C*                     SeedManager;                                       // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_StormModeUpgradesStation_C*        RunicGate;                                         // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FRandomStream                         Seed_Riposte;                                      // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	TArray<enum class ERiposteTypes>             Ripostes_All;                                      // 0x498(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	enum class ERiposteTypes                     Riposte_SelectedRandom;                            // 0x4A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              DynamicMaterial;                                   // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Animated;                                          // 0x4B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SpotLight;                                         // 0x4B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32AE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Width;                                             // 0x4BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Length;                                            // 0x4C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x4C4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Brightness;                                        // 0x4D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GodRay_CurrentBrightness;                          // 0x4D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeDistance;                                      // 0x4DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                         RandomTime;                                        // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor)
	bool                                         Rot_AlignCubes;                                    // 0x4E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Rot_Cube_1;                                        // 0x4EC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              Rot_Cube_2;                                        // 0x4F8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              Rot_Cube_3;                                        // 0x504(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                            Sound_Pillar_Interaction;                          // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasShownWarning;                                  // 0x518(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bShowRunicWarning;                                 // 0x519(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_ChangeAreaPillar_C* GetDefaultObj();

	void ShouldShowWarning(bool* Show_, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetCanUnlockAnyRunicEntry_CanUnlock);
	void Sound_FadeOut_FireAudio();
	void Sound_FadeIn_FireAudio();
	void Turn_Off_Pillar(float Alpha, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1);
	void GetCubeRot();
	void AddRandomRotToCubes(int32 Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, int32 Temp_int_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, int32 Temp_int_Variable_2, float Temp_float_Variable_4, float Temp_float_Variable_5, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, float K2Node_Select_Default, float K2Node_Select_Default_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult, float K2Node_Select_Default_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult_2);
	void SoundPillarCube(class USoundBase* Sound, class USceneComponent* Component, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	struct FRotator AddCubeRot(float Alpha, const struct FRotator& Rot, float Yaw, const struct FRotator& Temp_struct_Variable, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool Temp_bool_Variable, const struct FRotator& K2Node_Select_Default, const struct FRotator& CallFunc_RLerp_ReturnValue);
	void Pillar_AlignRot(float Alpha, const struct FRotator& Rot, class USceneComponent* Component, float Yaw, const struct FRotator& CallFunc_AddCubeRot_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult);
	void SetFireColor(const struct FLinearColor& Local_Color, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue);
	void SetGodRay(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, float CallFunc_RandomFloatInRangeFromStream_ReturnValue);
	void TeleportToFinalBoss(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess);
	void DisableSpawnedRunicGate(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void IncrementStormModeProgress(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3, bool K2Node_DynamicCast_bSuccess_3, bool K2Node_SwitchName_CmpSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_4, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_5, bool K2Node_DynamicCast_bSuccess_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_6, bool K2Node_DynamicCast_bSuccess_6, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_7, bool K2Node_DynamicCast_bSuccess_7, enum class Enum_StormModeProgress CallFunc_GetStormModeProgress_Progress, bool K2Node_SwitchEnum_CmpSuccess);
	void UnlockStartingInfusion(enum class EGland_Types Gland, int32 CallFunc_MakeLiteralInt_ReturnValue, enum class ERiposteTypes CallFunc_GetInfusionToUnlockFromGland_Riposte, class FName CallFunc_GetStartingInfusionIDs_ReturnValue);
	void UnlockRiposte(enum class EGland_Types Gand, bool ToFinalBoss_, class FName NotifyAtEnd, int32 GlandNumber, int32 Local_GlandNumber, class FName Local_NotifyAtEnd, bool Local_ToFinalBoss_, enum class EGland_Types Local_Gland, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_GetSeedRipostes_Seed, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, enum class ERiposteTypes CallFunc_Array_Get_Item, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character_1, bool K2Node_DynamicCast_bSuccess_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_2, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character_2, bool K2Node_DynamicCast_bSuccess_2, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, TArray<enum class ERiposteTypes>& CallFunc_GetUnlockedRipostes_Ripostes, enum class ERiposteTypes CallFunc_Array_Get_Item_1, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_StormMode_StartingRiposteNotDefault__ReturnValue, class FName CallFunc_StormMode_StartingRiposteNotDefault__StartingRiposte, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_GetRiposteUpgradeIDs_ReturnValue);
	void IncrementGlandData(bool ToFinalBoss_, int32 GlandNumber, int32 Local_GlandNumber, bool Local_ToFinalBoss_, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2, bool K2Node_DynamicCast_bSuccess_2, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, bool CallFunc_RemoveInventoryItem_Success, bool CallFunc_RemoveInventoryItem_Success_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3, bool K2Node_DynamicCast_bSuccess_3, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, enum class Enum_StormModeGlandData CallFunc_StormMode_GetCurrentGlandData_Gland, bool CallFunc_RemoveInventoryItem_Success_2, bool K2Node_SwitchEnum_CmpSuccess);
	void LeaveDialogue();
	void OnActorUsed(class APlayerController* Controller, bool* Success, bool CallFunc_ShouldShowWarning_Show_, bool CallFunc_OnActorUsed_Success, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue);
	bool HasAnyGlandInInventory(bool CallFunc_CheckPlayerInventoryForItem_Success, int32 CallFunc_CheckPlayerInventoryForItem_InventorySlot, bool CallFunc_CheckPlayerInventoryForItem_Success_1, int32 CallFunc_CheckPlayerInventoryForItem_InventorySlot_1, bool CallFunc_CheckPlayerInventoryForItem_Success_2, int32 CallFunc_CheckPlayerInventoryForItem_InventorySlot_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void UserConstructionScript();
	void Timeline_Cubes_Movement_3__FinishedFunc();
	void Timeline_Cubes_Movement_3__UpdateFunc();
	void Timeline_Cubes_Movement_3__Sound__EventFunc();
	void Timeline_Cubes_Movement_2__FinishedFunc();
	void Timeline_Cubes_Movement_2__UpdateFunc();
	void Timeline_Cubes_Movement_2__Sound__EventFunc();
	void Timeline_Cubes_Movement_1__FinishedFunc();
	void Timeline_Cubes_Movement_1__UpdateFunc();
	void Timeline_Cubes_Movement_1__Sound__EventFunc();
	void Timeline_3__FinishedFunc();
	void Timeline_3__UpdateFunc();
	void OnAnswerSelected(class FName ID);
	void Dialogue_CheckForGland(class FName GiveID);
	void Gland_Returned(class FName GlandID);
	void BndEvt__RuneRandomizerComponent_K2Node_ComponentBoundEvent_0_OnUpgradesSelected__DelegateSignature(enum class Enum_Rune_Category_Randomizer Category, class FName ID);
	void StartTeleporting();
	void ContinueDialog();
	void OnFinalGlandReturned();
	void ReceiveBeginPlay();
	void Animation_Cube_2();
	void Animation_Cube_1();
	void Animation_Cube_3();
	void CubesAnim_Start();
	void DisablePillarAnim();
	void ShowWarning();
	void ExecuteUbergraph_BP_ChangeAreaPillar(int32 EntryPoint, class UUI_StormMode_RunicWarning_C* CallFunc_Create_ReturnValue, TScriptInterface<class IBPI_StormModeMenu_C> CallFunc_OnOpen_self_CastInput, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, class FName K2Node_CustomEvent_ID, TArray<class FName>& K2Node_MakeArray_Array, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_HasAnyGlandInInventory_ReturnValue, class FName K2Node_CustomEvent_GiveID, class FName K2Node_CustomEvent_GlandID, enum class Enum_Rune_Category_Randomizer K2Node_ComponentBoundEvent_Category, class FName K2Node_ComponentBoundEvent_ID, bool K2Node_SwitchName_CmpSuccess_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_StormModeProgress CallFunc_GetStormModeProgress_Progress, bool K2Node_SwitchName_CmpSuccess_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2, bool K2Node_DynamicCast_bSuccess_2, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess_3, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character_1, bool K2Node_DynamicCast_bSuccess_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_6, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_2, bool K2Node_DynamicCast_bSuccess_7, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool K2Node_SwitchString_CmpSuccess, class FText CallFunc_GetYesText_Yes, class FText CallFunc_GetNoText_No, TArray<class FText>& K2Node_MakeArray_Array_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, float CallFunc_K2_GetScalarParameterValue_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_3, bool K2Node_DynamicCast_bSuccess_8, class APlayerController* CallFunc_GetPlayerController_ReturnValue_7, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_4, bool K2Node_DynamicCast_bSuccess_9);
};

}


