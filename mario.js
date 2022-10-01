function initMap(){
    map = new google.maps.Map(document.getElementById('map'), {
        center: {lat: 23.033872914615227, lng: 72.54665526974169},
        zoom: 15,
        mapId: '51cf1280aa3e1fe5',
        mapTypeControl: false,
        fullscreeenControl : false,
        streetViewControl: false
        });
        const markers = [
            [
                "flag",
                23.033872914615227,
                72.54665526974169,
                "flag.png",
                38,
                31

            ],
            [
                "jump",
                23.034560240050794,
                 72.54312931109344,
                 "jump.png",
                 38,
                 31

            ],
            [
                "lov",
                23.030817048589107, 
                72.55248400436513,
                "lov.png",
                38,
                31

            ],
            [
                "bt",
                23.03808378300168,
                 72.55446820496171,
                 "bt.png",
                 38,
                 31

            ],
            [
                "pt",
                23.02654998852586,
                 72.54782720706238,
                 "pt.png",
                 38,
                 31

            ],
            [
                "marker",
                23.02852515098051,
                 72.5546706744261,
                 "marker.png",
                 38,
                 31

            ],

        ];
        for(let i = 0; i<markers.length;i++){
            const currMarker = markers[i];
            new google.maps.Marker({
                position: {lat: currMarker[1], lng: currMarker[2]},
                map,
                title: currMarker[0],
                icon:{
                    url:currMarker[3],
                    scaledSize:new google.maps.Size(currMarker[4],currMarker[5])
                },
                animation: google.maps.Animation.DROP
              });
        }

        
}
//23.033872914615227, 72.54665526974169
//23.034560240050794, 72.54312931109344
//23.030817048589107, 72.55248400436513
//23.03808378300168, 72.55446820496171
//23.02654998852586, 72.54782720706238
//23.02852515098051, 72.5546706744261