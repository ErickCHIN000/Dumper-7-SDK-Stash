#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x118 - 0x28)
// BlueprintGeneratedClass PlayerSaveGame.PlayerSaveGame_C
class UPlayerSaveGame_C : public USaveGame
{
public:
	struct FPlayerInfo                           S_PlayerInfo;                                      // 0x28(0x48)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        CurrentSaveSlot;                                   // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ForcePS4Icons;                                     // 0x74(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AutoLockOnNextTarget;                              // 0x75(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_ADC[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Volumes                       Struct_Volumes;                                    // 0x78(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Subtitles_Scale;                                   // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InvertControllerYAxis;                             // 0x94(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         MotionBlur;                                        // 0x95(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         RadialBlur;                                        // 0x96(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         FilmGrain;                                         // 0x97(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PixelMode;                                         // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AEF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Resolution_Scale;                                  // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InvertControllerXAxis;                             // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         InvertMouseYAxis;                                  // 0xA1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         InvertMouseXAxis;                                  // 0xA2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AF7[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Controller_Sensitivity;                            // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Mouse_Sensitivity;                                 // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Controller_Sensitivity_Ballistazooka;              // 0xAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Mouse_Sensitivity_Ballistazooka;                   // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Brightness;                                        // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Framerate_Index;                                   // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Language                     ELanguage;                                         // 0xBC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_EnemyHPVisibility            E_EnemyHPVisibility;                               // 0xBD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_EnemyHPOpacity               E_EnemyHPOpacity;                                  // 0xBE(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_HUD_Size                     E_HUDScale;                                        // 0xBF(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_HUD_Size                     E_UIScale;                                         // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DamageNumbers;                                     // 0xC1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HoldToDismiss;                                     // 0xC2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B13[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CameraShakeScale;                                  // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ForceFeedbackScale;                                // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AspectRatioConstraint;                             // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FOV;                                               // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NotifyVisibility             ItemNotify_Visibility;                             // 0xD4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NotifyDuration               ItemNotify_Duration;                               // 0xD5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NotifyVisibility             ShellNotify_Visibility;                            // 0xD6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NotifyDuration               ShellNotify_Duration;                              // 0xD7(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NotifyVisibility             WeaponNotify_Visibility;                           // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NotifyDuration               WeaponNotify_Duration;                             // 0xD9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HideTarnishedSeal;                                 // 0xDA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HideSacredGlands;                                  // 0xDB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        BallistazookaOpacity;                              // 0xDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_BossSoundtrackType           E_BossSoundtrackType;                              // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSeasonalContent;                                  // 0xE1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ConstraintCutsceneAspectRatio;                     // 0xE2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class Enum_AdaptiveTriggers_Enabled     AdaptiveTriggers_EnableType;                       // 0xE3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HapticFeedback_Intensity;                          // 0xE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DualSenseAudio_Enabled;                            // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FStruct_IsStormMode                   StormMode_HasEnteredOnce;                          // 0xE9(0x3)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_XboxS_Type                   EXboxSType;                                        // 0xEC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B48[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_StormModeDifficulty           StormMode_Difficulty;                              // 0xF0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B4A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDHTwitchDrop>                 TwitchDrops;                                       // 0x100(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	enum class Enum_Notify_StormMode_Visibility  RunicFam_Visibility;                               // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Notify_StormMode_Duration    RunicFam_Duration;                                 // 0x111(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Notify_StormMode_Visibility  InstinctNotify_Visibility;                         // 0x112(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Notify_StormMode_Duration    InstinctNotify_Duration;                           // 0x113(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        StormMode_LastSaveSlotIndex;                       // 0x114(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPlayerSaveGame_C* GetDefaultObj();

	void GetNotifications(enum class Enum_NotifyVisibility* ItemNotify_Visibility, enum class Enum_NotifyDuration* ItemNotify_Duration, enum class Enum_NotifyVisibility* ShellNotify_Visibility, enum class Enum_NotifyDuration* ShellNotify_Duration, enum class Enum_NotifyVisibility* WeaponNotify_Visibility, enum class Enum_NotifyDuration* WeaponNotify_Duration);
	void SetNotifications(enum class Enum_NotifyVisibility ItemNotify_Visibility, enum class Enum_NotifyDuration ItemNotify_Duration, enum class Enum_NotifyVisibility ShellNotify_Visibility, enum class Enum_NotifyDuration ShellNotify_Duration, enum class Enum_NotifyVisibility WeaponNotify_Visibility, enum class Enum_NotifyDuration WeaponNotify_Duration);
};

}


