#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x40 - 0x40)
// Class GbxTimeOfDay.MaterialExpressionTimeOfDay
class UMaterialExpressionTimeOfDay : public UMaterialExpression
{
public:

	static class UClass* StaticClass();
	static class UMaterialExpressionTimeOfDay* GetDefaultObj();

};

// 0x78 (0x4D0 - 0x458)
// Class GbxTimeOfDay.TimeOfDayActor
class ATimeOfDayActor : public AActor
{
public:
	class UTimeOfDayComponent*                   TimeOfDayComponent;                                // 0x458(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDirectionalLightComponent*            DirectionalLightComponent;                         // 0x460(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkyLightComponent*                    SkyLightComponent;                                 // 0x468(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAtmosphericFogComponent*              AtmosphericFogComponent;                           // 0x470(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UExponentialHeightFogComponent*        ExponentialHeightFogComponent;                     // 0x478(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0x480(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPostProcessComponent*                 PostProcessComponent;                              // 0x488(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ALight*>                        ControlledLightActors;                             // 0x490(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	TArray<struct FControlledLight>              ControlledLights;                                  // 0x4A0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0x4B0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  StartLayer;                                        // 0x4B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class UObject>>        EventListeners;                                    // 0x4C0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ATimeOfDayActor* GetDefaultObj();

	class UDirectionalLightComponent* GetDirectionalLightComponent();
	void EnumerateLayerNames(TArray<class FName>* OutLayerNames);
	void AddEventListener(class UObject* InListener);
};

// 0x0 (0x28 - 0x28)
// Class GbxTimeOfDay.TimeOfDayBlueprintLibrary
class UTimeOfDayBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UTimeOfDayBlueprintLibrary* GetDefaultObj();

	void TransitionUpOneLayer(class UObject* WorldContextObject, float TransitionDuration);
	void TransitionToLayer(class UObject* WorldContextObject, const class FString& ToLayer, float TransitionDuration);
	void TransitionDownOneLayer(class UObject* WorldContextObject, float TransitionDuration);
	void StartTimeOfDay(class UObject* WorldContextObject);
	void SetTimeOfDay(class UObject* WorldContextObject, float NewTimeOfDay);
	void PauseTimeOfDay(class UObject* WorldContextObject);
	enum class ETimeOfDayState GetTimeOfDayState(class UObject* WorldContextObject);
	float GetTimeOfDay(class UObject* WorldContextObject);
	void AddTimeOfDayListener(class UObject* WorldContextObject, class UObject* InListener);
};

// 0xE0 (0x3B0 - 0x2D0)
// Class GbxTimeOfDay.TimeOfDayComponent
class UTimeOfDayComponent : public USceneComponent
{
public:
	struct FTimeOfDayCycleInstanceData           TimeOfDayCycleInstanceData;                        // 0x2D0(0xA0)(Edit, NativeAccessSpecifierPublic)
	class UTimeOfDayCycleInstance*               TimeOfDayCycleInstance;                            // 0x370(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartWithTickDisabled;                            // 0x378(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3CE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartWithTickDisabledTimeOfDay;                    // 0x37C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Timeofday;                                         // 0x380(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32                                       CycleCount;                                        // 0x384(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  CurrentLayerName;                                  // 0x388(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TransitionTimeLeft;                                // 0x390(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LastEvaluatedTime;                                 // 0x394(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CinematicTimeOfDay;                                // 0x398(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUseCinematicTimeOfDay;                            // 0x39C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3DA[0xB];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bShouldTick;                                       // 0x3A8(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DE[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTimeOfDayComponent* GetDefaultObj();

	void SetUseCinematicTimeOfDay(bool InUseCinematicTimeOfDay);
	void SetCinematicTimeOfDay(float InCinematicTimeOfDay);
};

// 0x18 (0x40 - 0x28)
// Class GbxTimeOfDay.TimeOfDayCycle
class UTimeOfDayCycle : public UObject
{
public:
	class UMaterialParameterCollection*          ParameterCollection;                               // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            TimeOfDayAudioParameter;                           // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CycleLength;                                       // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FA[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTimeOfDayCycle* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class GbxTimeOfDay.TimeOfDayCycleInstance
class UTimeOfDayCycleInstance : public UObject
{
public:
	class UTimeOfDayCycle*                       ParentCycle;                                       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideCycleLength;                              // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_409[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OverrideCycleLength;                               // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLayerParameterCurves>         ParameterLayerCurves;                              // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FLayerPropertyCurves>          PropertyLayerCurves;                               // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTimeOfDayCycleInstance* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GbxTimeOfDay.TimeOfDayKeyBase
class UTimeOfDayKeyBase : public UObject
{
public:
	class UTimeOfDayLayer*                       ParentLayer;                                       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        KeyTime;                                           // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETimeOfDayKeyType                 KeyType;                                           // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_425[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTimeOfDayKeyBase* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class GbxTimeOfDay.TimeOfDayEventKey
class UTimeOfDayEventKey : public UTimeOfDayKeyBase
{
public:
	class FName                                  EventName;                                         // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETimeOfDayState                   State;                                             // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_443[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTimeOfDayEventKey* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class GbxTimeOfDay.TimeOfDayLayer
class UTimeOfDayLayer : public UObject
{
public:
	class UTimeOfDayCycle*                       ParentCycle;                                       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LayerOverrideName;                                 // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UTimeOfDayKeyBase*>             Keys;                                              // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCollectionScalarParameter>    OverrideScalarParameters;                          // 0x50(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
	TArray<struct FCollectionVectorParameter>    OverrideVectorParameters;                          // 0x60(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
	TArray<struct FCollectionScalarParameter>    OverrideScalarProperties;                          // 0x70(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
	TArray<struct FCollectionVectorParameter>    OverrideVectorProperties;                          // 0x80(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
	TArray<struct FTODCollectionVector4Parameter> OverrideVector4Properties;                         // 0x90(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UTimeOfDayLayer* GetDefaultObj();

};

// 0x50 (0x88 - 0x38)
// Class GbxTimeOfDay.TimeOfDayPropertyKey
class UTimeOfDayPropertyKey : public UTimeOfDayKeyBase
{
public:
	TArray<struct FCollectionScalarParameter>    OverrideScalarParameters;                          // 0x38(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
	TArray<struct FCollectionVectorParameter>    OverrideVectorParameters;                          // 0x48(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
	TArray<struct FCollectionScalarParameter>    OverrideScalarProperties;                          // 0x58(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
	TArray<struct FCollectionVectorParameter>    OverrideVectorProperties;                          // 0x68(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
	TArray<struct FTODCollectionVector4Parameter> OverrideVector4Properties;                         // 0x78(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UTimeOfDayPropertyKey* GetDefaultObj();

};

}


