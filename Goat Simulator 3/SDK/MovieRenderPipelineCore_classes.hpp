#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2B8 (0x2E0 - 0x28)
// Class MovieRenderPipelineCore.MoviePipeline
class UMoviePipeline : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnMoviePipelineFinishedDelegate;                   // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMoviePipelineWorkFinishedDelegate;               // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMoviePipelineShotWorkFinishedDelegate;           // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UMoviePipelineCustomTimeStep*          CustomTimeStep;                                    // 0x58(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_347[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEngineCustomTimeStep*                 CachedPrevCustomTimeStep;                          // 0x70(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULevelSequence*                        TargetSequence;                                    // 0x78(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ALevelSequenceActor*                   LevelSequenceActor;                                // 0x80(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMovieRenderDebugWidget*               DebugWidget;                                       // 0x88(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTexture*                              PreviewTexture;                                    // 0x90(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_350[0x208];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UMovieRenderDebugWidget>   DebugWidgetClass;                                  // 0x2A0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMoviePipelineExecutorJob*             CurrentJob;                                        // 0x2A8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_354[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipeline* GetDefaultObj();

	void Shutdown(bool bError);
	void RequestShutdown(bool bIsError);
	void OnMoviePipelineFinishedImpl();
	bool IsShutdownRequested();
	void Initialize(class UMoviePipelineExecutorJob* InJob);
	class UTexture* GetPreviewTexture();
	class UMoviePipelineMasterConfig* GetPipelineMasterConfig();
};

// 0x8 (0x30 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineCustomTimeStep
class UMoviePipelineCustomTimeStep : public UEngineCustomTimeStep
{
public:
	uint8                                        Pad_35F[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineCustomTimeStep* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineSetting
class UMoviePipelineSetting : public UObject
{
public:
	TWeakObjectPtr<class UMoviePipeline>         CachedPipeline;                                    // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bEnabled;                                          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_375[0x17];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineSetting* GetDefaultObj();

	void BuildNewProcessCommandLine(class FString& InOutUnrealURLParams, class FString& InOutCommandLineArgs);
};

// 0x20 (0x68 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineAntiAliasingSetting
class UMoviePipelineAntiAliasingSetting : public UMoviePipelineSetting
{
public:
	int32                                        SpatialSampleCount;                                // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TemporalSampleCount;                               // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideAntiAliasing;                             // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAntiAliasingMethod               AntiAliasingMethod;                                // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_387[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RenderWarmUpCount;                                 // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCameraCutForWarmUp;                            // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_389[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EngineWarmUpCount;                                 // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRenderWarmUpFrames;                               // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineAntiAliasingSetting* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineBlueprintLibrary
class UMoviePipelineBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineBlueprintLibrary* GetDefaultObj();

	void UpdateJobShotListFromSequence(class ULevelSequence* InSequence, class UMoviePipelineExecutorJob* InJob, bool* bShotsChanged);
	int32 ResolveVersionNumber(const struct FMoviePipelineFilenameResolveParams& InParams);
	void ResolveFilenameFormatArguments(const class FString& InFormatString, struct FMoviePipelineFilenameResolveParams& InParams, class FString* OutFinalPath, struct FMoviePipelineFormatArgs* OutMergedFormatArgs);
	enum class EMovieRenderPipelineState GetPipelineState(class UMoviePipeline* InPipeline);
	void GetOverallSegmentCounts(class UMoviePipeline* InMoviePipeline, int32* OutCurrentIndex, int32* OutTotalCount);
	void GetOverallOutputFrames(class UMoviePipeline* InMoviePipeline, int32* OutCurrentIndex, int32* OutTotalCount);
	struct FTimecode GetMasterTimecode(class UMoviePipeline* InMoviePipeline);
	struct FFrameNumber GetMasterFrameNumber(class UMoviePipeline* InMoviePipeline);
	class FString GetMapPackageName(class UMoviePipelineExecutorJob* InJob);
	class FText GetJobName(class UMoviePipeline* InMoviePipeline);
	struct FDateTime GetJobInitializationTime(class UMoviePipeline* InMoviePipeline);
	class FText GetJobAuthor(class UMoviePipeline* InMoviePipeline);
	bool GetEstimatedTimeRemaining(class UMoviePipeline* InPipeline, struct FTimespan* OutEstimate);
	struct FIntPoint GetEffectiveOutputResolution(class UMoviePipelineMasterConfig* InMasterConfig, class UMoviePipelineExecutorShot* InPipelineExecutorShot);
	struct FTimecode GetCurrentShotTimecode(class UMoviePipeline* InMoviePipeline);
	struct FFrameNumber GetCurrentShotFrameNumber(class UMoviePipeline* InMoviePipeline);
	struct FMoviePipelineSegmentWorkMetrics GetCurrentSegmentWorkMetrics(class UMoviePipeline* InMoviePipeline);
	enum class EMovieRenderShotState GetCurrentSegmentState(class UMoviePipeline* InMoviePipeline);
	void GetCurrentSegmentName(class UMoviePipeline* InMoviePipeline, class FText* OutOuterName, class FText* OutInnerName);
	float GetCurrentFocusDistance(class UMoviePipeline* InMoviePipeline);
	float GetCurrentFocalLength(class UMoviePipeline* InMoviePipeline);
	float GetCurrentAperture(class UMoviePipeline* InMoviePipeline);
	float GetCompletionPercentage(class UMoviePipeline* InPipeline);
	class UMoviePipelineSetting* FindOrGetDefaultSettingForShot(TSubclassOf<class UMoviePipelineSetting> InSettingType, class UMoviePipelineMasterConfig* InMasterConfig, class UMoviePipelineExecutorShot* InShot);
	class UMovieSceneSequence* DuplicateSequence(class UObject* Outer, class UMovieSceneSequence* InSequence);
};

// 0x8 (0x50 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineCameraSetting
class UMoviePipelineCameraSetting : public UMoviePipelineSetting
{
public:
	enum class EMoviePipelineShutterTiming       ShutterTiming;                                     // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_538[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OverscanPercentage;                                // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMoviePipelineCameraSetting* GetDefaultObj();

};

// 0x68 (0xB0 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineColorSetting
class UMoviePipelineColorSetting : public UMoviePipelineSetting
{
public:
	struct FOpenColorIODisplayConfiguration      OCIOConfiguration;                                 // 0x48(0x60)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                         bDisableToneCurve;                                 // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_543[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineColorSetting* GetDefaultObj();

};

// 0x40 (0x88 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoder
class UMoviePipelineCommandLineEncoder : public UMoviePipelineSetting
{
public:
	class FString                                FileNameFormatOverride;                            // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMoviePipelineEncodeQuality       Quality;                                           // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AdditionalCommandLineArgs;                         // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeleteSourceFiles;                                // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipEncodeOnRenderCanceled;                       // 0x71(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_552[0x16];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineCommandLineEncoder* GetDefaultObj();

};

// 0xC8 (0x100 - 0x38)
// Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoderSettings
class UMoviePipelineCommandLineEncoderSettings : public UDeveloperSettings
{
public:
	class FString                                ExecutablePath;                                    // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  CodecHelpText;                                     // 0x48(0x18)(Edit, NativeAccessSpecifierPublic)
	class FString                                VideoCodec;                                        // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AudioCodec;                                        // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputFileExtension;                               // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CommandLineFormat;                                 // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VideoInputStringFormat;                            // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AudioInputStringFormat;                            // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EncodeSettings_Low;                                // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EncodeSettings_Med;                                // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EncodeSettings_High;                               // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EncodeSettings_Epic;                               // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMoviePipelineCommandLineEncoderSettings* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineConfigBase
class UMoviePipelineConfigBase : public UObject
{
public:
	class FString                                DisplayName;                                       // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMoviePipelineSetting*>         Settings;                                          // 0x38(0x10)(Edit, ExportObject, ZeroConstructor, EditConst, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_59D[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineConfigBase* GetDefaultObj();

	void RemoveSetting(class UMoviePipelineSetting* InSetting);
	TArray<class UMoviePipelineSetting*> GetUserSettings();
	TArray<class UMoviePipelineSetting*> FindSettingsByClass(TSubclassOf<class UMoviePipelineSetting> InClass, bool bIncludeDisabledSettings);
	class UMoviePipelineSetting* FindSettingByClass(TSubclassOf<class UMoviePipelineSetting> InClass, bool bIncludeDisabledSettings);
	class UMoviePipelineSetting* FindOrAddSettingByClass(TSubclassOf<class UMoviePipelineSetting> InClass, bool bIncludeDisabledSettings);
	void CopyFrom(class UMoviePipelineConfigBase* InConfig);
};

// 0x10 (0x58 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineDebugSettings
class UMoviePipelineDebugSettings : public UMoviePipelineSetting
{
public:
	bool                                         bWriteAllSamples;                                  // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCaptureFramesWithRenderDoc;                       // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A6[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CaptureFrame;                                      // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A7[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineDebugSettings* GetDefaultObj();

};

// 0xE0 (0x108 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineExecutorBase
class UMoviePipelineExecutorBase : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnExecutorFinishedDelegate;                        // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_613[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnExecutorErroredDelegate;                         // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_614[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            SocketMessageRecievedDelegate;                     // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            HTTPResponseRecievedDelegate;                      // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UMovieRenderDebugWidget>   DebugWidgetClass;                                  // 0xA0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserData;                                          // 0xA8(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMoviePipeline>            TargetPipelineClass;                               // 0xB8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_61A[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineExecutorBase* GetDefaultObj();

	void SetStatusProgress(float InProgress);
	void SetStatusMessage(const class FString& InStatus);
	void SetMoviePipelineClass(class UClass* InPipelineClass);
	bool SendSocketMessage(const class FString& InMessage);
	int32 SendHTTPRequest(const class FString& InURL, const class FString& InVerb, const class FString& InMessage, TMap<class FString, class FString>& InHeaders);
	void OnExecutorFinishedImpl();
	void OnExecutorErroredImpl(class UMoviePipeline* ErroredPipeline, bool bFatal, class FText ErrorReason);
	void OnBeginFrame();
	bool IsSocketConnected();
	bool IsRendering();
	float GetStatusProgress();
	class FString GetStatusMessage();
	void Execute(class UMoviePipelineQueue* InPipelineQueue);
	void DisconnectSocket();
	bool ConnectSocket(const class FString& InHostName, int32 InPort);
	void CancelCurrentJob();
	void CancelAllJobs();
};

// 0x0 (0x48 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineOutputBase
class UMoviePipelineOutputBase : public UMoviePipelineSetting
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineOutputBase* GetDefaultObj();

};

// 0x38 (0x80 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineFCPXMLExporter
class UMoviePipelineFCPXMLExporter : public UMoviePipelineOutputBase
{
public:
	uint8                                        Pad_62D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                FileNameFormatOverride;                            // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFCPXMLExportDataSource           DataSource;                                        // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_62F[0x1F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineFCPXMLExporter* GetDefaultObj();

};

// 0x0 (0x2D0 - 0x2D0)
// Class MovieRenderPipelineCore.MoviePipelineGameMode
class AMoviePipelineGameMode : public AGameModeBase
{
public:

	static class UClass* StaticClass();
	static class AMoviePipelineGameMode* GetDefaultObj();

};

// 0xC0 (0x108 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineGameOverrideSetting
class UMoviePipelineGameOverrideSetting : public UMoviePipelineSetting
{
public:
	TSubclassOf<class AGameModeBase>             GameModeOverride;                                  // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCinematicQualitySettings;                         // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMoviePipelineTextureStreamingMethod TextureStreaming;                                  // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLODZero;                                       // 0x52(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableHLODs;                                     // 0x53(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseHighQualityShadows;                            // 0x54(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_639[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ShadowDistanceScale;                               // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShadowRadiusThreshold;                             // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideViewDistanceScale;                        // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_63E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ViewDistanceScale;                                 // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlushGrassStreaming;                              // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_63F[0x9F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineGameOverrideSetting* GetDefaultObj();

};

// 0x18 (0x60 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineHighResSetting
class UMoviePipelineHighResSetting : public UMoviePipelineSetting
{
public:
	int32                                        TileCount;                                         // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TextureSharpnessBias;                              // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverlapRatio;                                      // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideSubSurfaceScattering;                     // 0x54(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_640[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BurleySampleCount;                                 // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_641[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineHighResSetting* GetDefaultObj();

};

// 0x28 (0x130 - 0x108)
// Class MovieRenderPipelineCore.MoviePipelineLinearExecutorBase
class UMoviePipelineLinearExecutorBase : public UMoviePipelineExecutorBase
{
public:
	class UMoviePipelineQueue*                   Queue;                                             // 0x108(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMoviePipeline*                        ActiveMoviePipeline;                               // 0x110(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_644[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineLinearExecutorBase* GetDefaultObj();

};

// 0x38 (0x168 - 0x130)
// Class MovieRenderPipelineCore.MoviePipelineInProcessExecutor
class UMoviePipelineInProcessExecutor : public UMoviePipelineLinearExecutorBase
{
public:
	bool                                         bUseCurrentLevel;                                  // 0x130(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_649[0x37];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineInProcessExecutor* GetDefaultObj();

};

// 0x30 (0x68 - 0x38)
// Class MovieRenderPipelineCore.MoviePipelineInProcessExecutorSettings
class UMoviePipelineInProcessExecutorSettings : public UDeveloperSettings
{
public:
	bool                                         bCloseEditor;                                      // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_654[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AdditionalCommandLineArguments;                    // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InheritedCommandLineArguments;                     // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InitialDelayFrameCount;                            // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_657[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineInProcessExecutorSettings* GetDefaultObj();

};

// 0x68 (0xB8 - 0x50)
// Class MovieRenderPipelineCore.MoviePipelineMasterConfig
class UMoviePipelineMasterConfig : public UMoviePipelineConfigBase
{
public:
	TMap<class FString, class UMoviePipelineShotConfig*> PerShotConfigMapping;                              // 0x50(0x50)(ExportObject, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UMoviePipelineOutputSetting*           OutputSetting;                                     // 0xA0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMoviePipelineSetting*>         TransientSettings;                                 // 0xA8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMoviePipelineMasterConfig* GetDefaultObj();

	void InitializeTransientSettings();
	TArray<class UMoviePipelineSetting*> GetTransientSettings();
	struct FFrameRate GetEffectiveFrameRate(class ULevelSequence* InSequence);
	TArray<class UMoviePipelineSetting*> GetAllSettings(bool bIncludeDisabledSettings, bool bIncludeTransientSettings);
};

// 0x68 (0xB0 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineOutputSetting
class UMoviePipelineOutputSetting : public UMoviePipelineSetting
{
public:
	struct FDirectoryPath                        OutputDirectory;                                   // 0x48(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                FileNameFormat;                                    // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                             OutputResolution;                                  // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCustomFrameRate;                               // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_679[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameRate                            OutputFrameRate;                                   // 0x74(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_67B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bOverrideExistingOutput;                           // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_67C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HandleFrameCount;                                  // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutputFrameStep;                                   // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCustomPlaybackRange;                           // 0x8C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_67D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CustomStartFrame;                                  // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CustomEndFrame;                                    // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VersionNumber;                                     // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoVersion;                                      // 0x9C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_682[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ZeroPadFrameNumbers;                               // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameNumberOffset;                                 // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlushDiskWritesPerShot;                           // 0xA8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_685[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineOutputSetting* GetDefaultObj();

};

// 0x18 (0x120 - 0x108)
// Class MovieRenderPipelineCore.MoviePipelinePythonHostExecutor
class UMoviePipelinePythonHostExecutor : public UMoviePipelineExecutorBase
{
public:
	TSubclassOf<class UMoviePipelinePythonHostExecutor> ExecutorClass;                                     // 0x108(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMoviePipelineQueue*                   PipelineQueue;                                     // 0x110(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWorld*                                LastLoadedWorld;                                   // 0x118(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMoviePipelinePythonHostExecutor* GetDefaultObj();

	void OnMapLoad(class UWorld* InWorld);
	class UWorld* GetLastLoadedWorld();
	void ExecuteDelayed(class UMoviePipelineQueue* InPipelineQueue);
};

// 0x108 (0x130 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineExecutorShot
class UMoviePipelineExecutorShot : public UObject
{
public:
	bool                                         bEnabled;                                          // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6C7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OuterName;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InnerName;                                         // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6CC[0x98];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Progress;                                          // 0xE8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_6CE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                StatusMessage;                                     // 0xF0(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMoviePipelineShotConfig*              ShotOverrideConfig;                                // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UMoviePipelineShotConfig> ShotOverridePresetOrigin;                          // 0x108(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMoviePipelineExecutorShot* GetDefaultObj();

	bool ShouldRender();
	void SetStatusProgress(float InProgress);
	void SetStatusMessage(const class FString& InStatus);
	void SetShotOverridePresetOrigin(class UMoviePipelineShotConfig* InPreset);
	void SetShotOverrideConfiguration(class UMoviePipelineShotConfig* InPreset);
	float GetStatusProgress();
	class FString GetStatusMessage();
	class UMoviePipelineShotConfig* GetShotOverridePresetOrigin();
	class UMoviePipelineShotConfig* GetShotOverrideConfiguration();
	class UMoviePipelineShotConfig* AllocateNewShotOverrideConfig(TSubclassOf<class UMoviePipelineShotConfig> InConfigType);
};

// 0xB8 (0xE0 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineExecutorJob
class UMoviePipelineExecutorJob : public UObject
{
public:
	class FString                                JobName;                                           // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       Sequence;                                          // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       Map;                                               // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Author;                                            // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMoviePipelineExecutorShot*>    ShotInfo;                                          // 0x78(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class FString                                UserData;                                          // 0x88(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StatusMessage;                                     // 0x98(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StatusProgress;                                    // 0xA8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsConsumed;                                       // 0xAC(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_6F7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMoviePipelineMasterConfig*            Configuration;                                     // 0xB0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UMoviePipelineMasterConfig> PresetOrigin;                                      // 0xB8(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMoviePipelineExecutorJob* GetDefaultObj();

	void SetStatusProgress(float InProgress);
	void SetStatusMessage(const class FString& InStatus);
	void SetSequence(const struct FSoftObjectPath& InSequence);
	void SetPresetOrigin(class UMoviePipelineMasterConfig* InPreset);
	void SetConsumed(bool bInConsumed);
	void SetConfiguration(class UMoviePipelineMasterConfig* InPreset);
	void OnDuplicated();
	bool IsConsumed();
	float GetStatusProgress();
	class FString GetStatusMessage();
	class UMoviePipelineMasterConfig* GetPresetOrigin();
	class UMoviePipelineMasterConfig* GetConfiguration();
};

// 0x18 (0x40 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineQueue
class UMoviePipelineQueue : public UObject
{
public:
	TArray<class UMoviePipelineExecutorJob*>     Jobs;                                              // 0x28(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_71B[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineQueue* GetDefaultObj();

	TArray<class UMoviePipelineExecutorJob*> GetJobs();
	class UMoviePipelineExecutorJob* DuplicateJob(class UMoviePipelineExecutorJob* InJob);
	void DeleteJob(class UMoviePipelineExecutorJob* InJob);
	void CopyFrom(class UMoviePipelineQueue* InQueue);
	class UMoviePipelineExecutorJob* AllocateNewJob(TSubclassOf<class UMoviePipelineExecutorJob> InJobType);
};

// 0x10 (0x40 - 0x30)
// Class MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem
class UMoviePipelineQueueEngineSubsystem : public UEngineSubsystem
{
public:
	class UMoviePipelineExecutorBase*            ActiveExecutor;                                    // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMoviePipelineQueue*                   CurrentQueue;                                      // 0x38(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMoviePipelineQueueEngineSubsystem* GetDefaultObj();

	void RenderQueueWithExecutorInstance(class UMoviePipelineExecutorBase* InExecutor);
	class UMoviePipelineExecutorBase* RenderQueueWithExecutor(TSubclassOf<class UMoviePipelineExecutorBase> InExecutorType);
	bool IsRendering();
	class UMoviePipelineQueue* GetQueue();
	class UMoviePipelineExecutorBase* GetActiveExecutor();
};

// 0x0 (0x48 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineRenderPass
class UMoviePipelineRenderPass : public UMoviePipelineSetting
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineRenderPass* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class MovieRenderPipelineCore.MoviePipelineShotConfig
class UMoviePipelineShotConfig : public UMoviePipelineConfigBase
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineShotConfig* GetDefaultObj();

};

// 0x40 (0x88 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineVideoOutputBase
class UMoviePipelineVideoOutputBase : public UMoviePipelineOutputBase
{
public:
	uint8                                        Pad_741[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineVideoOutputBase* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineViewFamilySetting
class UMoviePipelineViewFamilySetting : public UMoviePipelineSetting
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineViewFamilySetting* GetDefaultObj();

};

// 0x0 (0x260 - 0x260)
// Class MovieRenderPipelineCore.MovieRenderDebugWidget
class UMovieRenderDebugWidget : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UMovieRenderDebugWidget* GetDefaultObj();

	void OnInitializedForPipeline(class UMoviePipeline* ForPipeline);
};

}


