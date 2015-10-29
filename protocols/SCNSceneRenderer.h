/* Generated by RuntimeBrowser.
 */

@protocol SCNSceneRenderer <NSObject>

@required

- (AVAudioEngine *)audioEngine;
- (AVAudioEnvironmentNode *)audioEnvironmentNode;
- (SCNNode *)audioListener;
- (BOOL)autoenablesDefaultLighting;
- (unsigned int)colorPixelFormat;
- (<MTLCommandQueue> *)commandQueue;
- (void*)context;
- (<MTLRenderCommandEncoder> *)currentRenderCommandEncoder;
- (unsigned int)debugOptions;
- (<SCNSceneRendererDelegate> *)delegate;
- (unsigned int)depthPixelFormat;
- (<MTLDevice> *)device;
- (NSArray *)hitTest:(struct CGPoint { float x1; float x2; })arg1 options:(NSDictionary *)arg2;
- (BOOL)isJitteringEnabled;
- (BOOL)isNodeInsideFrustum:(SCNNode *)arg1 withPointOfView:(SCNNode *)arg2;
- (BOOL)isPlaying;
- (BOOL)loops;
- (NSArray *)nodesInsideFrustumWithPointOfView:(SCNNode *)arg1;
- (SKScene *)overlaySKScene;
- (SCNNode *)pointOfView;
- (BOOL)prepareObject:(void *)arg1 shouldAbortBlock:(void *)arg2; // needs 2 arg types, found 6: id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, BOOL, id /* block */, void*
- (void)prepareObjects:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*
- (void)presentScene:(void *)arg1 withTransition:(void *)arg2 incomingPointOfView:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 8: SCNScene *, SKTransition *, SCNNode *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (struct SCNVector3 { float x1; float x2; float x3; })projectPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (unsigned int)renderingAPI;
- (SCNScene *)scene;
- (double)sceneTime;
- (void)setAudioListener:(SCNNode *)arg1;
- (void)setAutoenablesDefaultLighting:(BOOL)arg1;
- (void)setDebugOptions:(unsigned int)arg1;
- (void)setDelegate:(id <SCNSceneRendererDelegate>)arg1;
- (void)setJitteringEnabled:(BOOL)arg1;
- (void)setLoops:(BOOL)arg1;
- (void)setOverlaySKScene:(SKScene *)arg1;
- (void)setPlaying:(BOOL)arg1;
- (void)setPointOfView:(SCNNode *)arg1;
- (void)setScene:(SCNScene *)arg1;
- (void)setSceneTime:(double)arg1;
- (void)setShowsStatistics:(BOOL)arg1;
- (BOOL)showsStatistics;
- (unsigned int)stencilPixelFormat;
- (struct SCNVector3 { float x1; float x2; float x3; })unprojectPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg1;

@end