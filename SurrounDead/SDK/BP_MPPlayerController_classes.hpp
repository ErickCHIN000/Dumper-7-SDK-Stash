#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x158 (0x9B0 - 0x858)
// BlueprintGeneratedClass BP_MPPlayerController.BP_MPPlayerController_C
class ABP_MPPlayerController_C : public ABP_PlayerController_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x858(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNarrativeComponent*                   NarrativeComponent;                                // 0x860(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULevellingComponent_C*                 LevellingComponent;                                // 0x868(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTechTreeComponent_C*                  TechTreeComponent;                                 // 0x870(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPassiveSkillsComponent_C*             PassiveSkillsComponent;                            // 0x878(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBPC_MinimapSystem_C*                  BPC_MinimapSystem;                                 // 0x880(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      Widget;                                            // 0x888(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         AutoSaveEnabled;                                   // 0x890(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_KeepInventory                 KeepInventory;                                     // 0x898(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	class FName                                  Level;                                             // 0x8C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDebugMenu_C*                          DebugMenu;                                         // 0x8D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugToggled_;                                     // 0x8D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Forename;                                          // 0x8E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                Surname;                                           // 0x8F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                Sex;                                               // 0x900(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                Age;                                               // 0x910(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	enum class Enum_Occupation                   Occupation;                                        // 0x920(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ZombieKills;                                       // 0x924(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BossZombieKills;                                   // 0x928(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AnimalKills;                                       // 0x92C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HumanKills;                                        // 0x930(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DaysSurvived;                                      // 0x934(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DistanceTravelled;                                 // 0x938(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InfestationsDestroyed;                             // 0x940(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RespawnPointEnabled;                               // 0x944(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43D4[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RespawnLoc;                                        // 0x950(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MPPlayerController_C* GetDefaultObj();

	void GetJoystickDirection(enum class EJoystickTypes Stick, struct FVector2D* StickInput, float CallFunc_GetInputAxisKeyValue_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetInputAxisKeyValue_ReturnValue_1, float CallFunc_GetInputAxisKeyValue_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetInputAxisKeyValue_ReturnValue_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, double CallFunc_MakeVector2D_Y_ImplicitCast, double CallFunc_MakeVector2D_X_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_MakeVector2D_X_ImplicitCast_1);
	void ComponentsToSave(TArray<class UActorComponent*>* Components, TArray<class UActorComponent*>& K2Node_MakeArray_Array);
	void LoadPlayerInventoryFromSlot(const class FString& CallFunc_GetSlotInfoSaveGame_SaveGameName, class UEMSInfoSaveGame* CallFunc_GetSlotInfoSaveGame_ReturnValue, class ABP_PlayerCharacter_C* CallFunc_CastToCharacter_Character, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void OnFailed_F36E30354316ADD99BBAD29E4E315233();
	void OnCompleted_F36E30354316ADD99BBAD29E4E315233();
	void OnFailed_9CDBA9034C950D925C1539BE037C23EF();
	void OnCompleted_9CDBA9034C950D925C1539BE037C23EF();
	void InpActEvt_Map_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_DebugMenu_K2Node_InputActionEvent_0(const struct FKey& Key);
	void ActorSaved();
	void ActorPreSave();
	void ActorLoaded();
	void Svr_RequestRespawn_SpawnPoint();
	void Svr_RequestRespawnSuicide();
	void Client_SUICIDE();
	void Svr_RequestRespawn_Random();
	void Client_Died();
	void ReceivePossess(class APawn* PossessedPawn);
	void CameraShake(class UClass* CameraShake);
	void CameraShakeClient(class UClass* Shake);
	void ReceiveBeginPlay();
	void SensitivityChanged(float NewValue);
	void EventLightShafts(bool NewValue);
	void EventVolFog(bool NewValue);
	void LoadGameFromSlot();
	void SaveGameToSlot();
	void Client_MapToggle();
	void ExecuteUbergraph_BP_MPPlayerController(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, const struct FKey& K2Node_InputActionEvent_Key, const struct FKey& K2Node_InputActionEvent_Key_1, class UEMSAsyncSaveGame* CallFunc_AsyncSaveActors_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class USave_Player_C* CallFunc_GetCustomSave_ReturnValue, class USave_Player_C* CallFunc_GetCustomSave_ReturnValue_1, class USD_GameInstance_C* CallFunc_GetGameInstance_Instance, class USD_GameInstance_C* CallFunc_GetGameInstance_Instance_1, class USD_GameInstance_C* CallFunc_GetGameInstance_Instance_2, class UScreenPermadeath_C* CallFunc_Create_ReturnValue, bool CallFunc_GetBoolCVar_ReturnValue, class UScreenPermadeath_C* CallFunc_Create_ReturnValue_1, bool CallFunc_GetBoolCVar_ReturnValue_1, class ULevellingComponent_C* CallFunc_GetLevellingComponent_LevellingComponent, class URespawnScreen_C* CallFunc_Create_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBP_CustomNarrativeDefaultUI_C* CallFunc_Create_ReturnValue_3, class APawn* K2Node_Event_PossessedPawn, class UEMSAsyncLoadGame* CallFunc_AsyncLoadActors_ReturnValue, class UClass* K2Node_Event_CameraShake, bool CallFunc_IsValid_ReturnValue_1, class UClass* K2Node_CustomEvent_Shake, bool Temp_bool_IsClosed_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_StoreStats_ReturnValue, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetAchievement_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_3, float K2Node_CustomEvent_NewValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool K2Node_CustomEvent_NewValue_1, bool K2Node_CustomEvent_NewValue, double CallFunc_RandomFloatInRange_ReturnValue, const class FString& CallFunc_GetSlotInfoSaveGame_SaveGameName, class UEMSInfoSaveGame* CallFunc_GetSlotInfoSaveGame_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class USave_Difficulties_C* CallFunc_GetCustomSave_ReturnValue_2, const class FString& CallFunc_GetSlotInfoSaveGame_SaveGameName_1, class UEMSInfoSaveGame* CallFunc_GetSlotInfoSaveGame_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Save_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UDebugMenu_C* CallFunc_Create_ReturnValue_4, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsValid_ReturnValue_4, const struct FKey& K2Node_InputKeyEvent_Key, const struct FGameplayTag& CallFunc_GetKeyGroupStatic_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_GetBoolCVar_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast);
};

}


